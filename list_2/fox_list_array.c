#include <linux/module.h>
#include <linux/init.h>
#include <linux/list.h>
#include <linux/slab.h>

MODULE_AUTHOR("Pooja");
MODULE_DESCRIPTION("Demo: Linked list array");
MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1");

static int tail_len[5];
static int no_of_node;
//static int count = 0;

module_param(no_of_node, int, 0644);
MODULE_PARM_DESC(no_of_node, "No of nodes");

module_param_array(tail_len, int, NULL, 0644);
MODULE_PARM_DESC(tail_len, "fox tail length");

static int wght[5];
module_param_array(wght, int, NULL, 0644);
MODULE_PARM_DESC(wght, "fox weight");

static bool is_fant[5];
module_param_array(is_fant, bool, NULL, 0644);
MODULE_PARM_DESC(is_fant, "is fox fantastic");

struct fox_list {
	int tail_length;
	int weight;
	bool is_fantastic;
	struct list_head list;
};

LIST_HEAD(fox_master_list);
void fox_list_add(int, int, bool);
void fox_list_display(void);
void fox_list_del(void);

void fox_list_add(int t_len, int wt, bool is_fant)
{
	struct fox_list *red_fox;

	pr_info("Add node in list\n");
	red_fox = kmalloc(sizeof(*red_fox), GFP_KERNEL);
	if(!red_fox) {
		pr_err("Out of memory\n");
		return;	
	}
	red_fox->tail_length = t_len;
	red_fox->weight = wt;
	red_fox->is_fantastic = is_fant;
	INIT_LIST_HEAD(&red_fox->list);
	list_add(&red_fox->list, &fox_master_list);
}

void fox_list_display(void)
{
	struct fox_list *entry;

	pr_info("Display fox list\n");
	list_for_each_entry(entry, &fox_master_list, list)
		pr_info("fox tail length: %d weight: %d is_fantastic: %d\n",
				entry->tail_length,
				entry->weight,
				entry->is_fantastic);
}

void fox_list_del(void)
{
	struct fox_list *p, *tmp;

	pr_info("Delete node from fox list\n");	
	list_for_each_entry_safe(p, tmp, &fox_master_list, list) {
		pr_info("fox tail length: %d weight: %d is_fantastic: %d\n",
				p->tail_length,
				p->weight,
				p->is_fantastic);
		list_del(&p->list);
		kfree(p);
	}
}

static int __init fox_list_array_init(void)
{
	int count;
	pr_info("fox_list_array init\n");

	for(count = 0; count < no_of_node; count++) {
		fox_list_add(tail_len[count], wght[count], is_fant[count]);
	}
	fox_list_display();
	return 0;
}

static void __exit fox_list_array_exit(void)
{
	fox_list_del();
	pr_info("fox_list_array exit\n");
}
module_init(fox_list_array_init);
module_exit(fox_list_array_exit);
