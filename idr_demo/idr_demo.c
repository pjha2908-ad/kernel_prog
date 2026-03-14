#include <linux/init.h>
#include <linux/module.h>
#include <linux/idr.h>

MODULE_AUTHOR("Pooja");
MODULE_DESCRIPTION("Demo: Map");
MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1");

struct employee {
	int emp_id;
	char emp_name[32];
};

struct idr my_idr;
int id = 0;
struct employee *emp= NULL;

static int __init idr_demo_init(void)
{
	struct employee *found_emp = NULL;
	pr_info("Demo: idr init\n");

	idr_init(&my_idr);

	emp = kmalloc(sizeof(*emp), GFP_KERNEL);
	if(!emp)
		return -ENOMEM;

	id = idr_alloc(&my_idr, emp, 0, 0, GFP_KERNEL);
	if(id < 0) {
		kfree(emp);
		return id;
	}
	emp->emp_id = id;
	strscpy(emp->emp_name, "Jones", sizeof(emp->emp_name));

	found_emp = idr_find(&my_idr, id);
	if(found_emp) {
		pr_info("emp id: %d\n", found_emp->emp_id);
		pr_info("emp name: %s\n", found_emp->emp_name);
	} else {
		pr_info("Couldn't find the employee\n");
	}

	return 0;
}

static void __exit idr_demo_exit(void)
{
	idr_remove(&my_idr, id);
	kfree(emp);

	idr_destroy(&my_idr);

	pr_info("Demo: idr exit\n");
}
module_init(idr_demo_init);
module_exit(idr_demo_exit);
