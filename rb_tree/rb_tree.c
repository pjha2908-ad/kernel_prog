#include <linux/init.h>
#include <linux/module.h>
#include <linux/rbtree.h>
#include <linux/slab.h>

MODULE_AUTHOR("Pooja");
MODULE_DESCRIPTION("Demo: rbtee");
MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1");

struct employee {
	int emp_id;
	char emp_name[32];
	struct rb_node node;
};
static struct rb_root rb_tree = RB_ROOT;

static int node_insert(struct rb_root *root, struct employee *emp)
{
	struct rb_node **new = &(root->rb_node), *parent = NULL;

	while(*new) {
		struct employee *this = rb_entry(*new, struct employee, node);
		parent = *new;

		if(emp->emp_id < this->emp_id)
			new = &((*new)->rb_left);
		else if(emp->emp_id > this->emp_id)
			new = &((*new)->rb_right);
		else
			return -EEXIST;
	}
	rb_link_node(&emp->node, parent, new);
	rb_insert_color(&emp->node, root);

	return 0;
}

static void node_cleanup(struct rb_root *root)
{
	struct rb_node *r_node;
	struct employee *emp;

	for(r_node = rb_first(root); r_node; ) {
		emp = rb_entry(r_node, struct employee, node);
		r_node = rb_next(r_node);
		rb_erase(&emp->node, root);
		kfree(emp);
	}
}

static struct employee *emp_search(struct rb_root *root, int id)
{
	struct rb_node *r_node = root->rb_node;

	while(r_node) {
		struct employee *emp = rb_entry(r_node, struct employee, node);
		if(id < emp->emp_id)
			r_node = r_node->rb_left;
		else if (id > emp->emp_id)
			r_node = r_node->rb_right;
		else
			return emp;
	}
	return NULL;
}

static int __init rb_tree_init(void)
{
	struct employee *new_emp;
	struct employee *emp_1;
	int ret;

	pr_info("Demo: rb tree init\n");

	new_emp = kmalloc(sizeof(*new_emp), GFP_KERNEL);
	if(!new_emp)
		return -ENOMEM;
	new_emp->emp_id = 101;
	strscpy(new_emp->emp_name, "Jones", sizeof(new_emp->emp_name));
	ret = node_insert(&rb_tree, new_emp);
	if(ret < 0) {
		kfree(new_emp);
		return ret;
	}

	emp_1 = emp_search(&rb_tree, 101);
	if(emp_1) {
		pr_info("Found employee....\n");
		pr_info("Emp Id: %d name: %s\n", emp_1->emp_id, emp_1->emp_name);
	}
	else
		pr_info("Employee not found\n");

	return 0;
}

static void __exit rb_tree_exit(void)
{
	node_cleanup(&rb_tree);
	pr_info("Demo rb_tree exit\n");
}
module_init(rb_tree_init);
module_exit(rb_tree_exit);
