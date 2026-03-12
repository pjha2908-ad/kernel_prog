#include <linux/init.h>
#include <linux/module.h>
#include <linux/list.h>

MODULE_AUTHOR("Pooja");
MODULE_DESCRIPTION("Demo: Fox list");
MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1");

static int tail_len;
module_param(tail_len, int, 0644);
MODULE_PARM_DESC(tail_len, "fox tail length");

static int wght;
module_param(wght, int, 0644);
MODULE_PARM_DESC(wght, "fox weight");

static bool is_fant;
module_param(is_fant, bool, 0644);
MODULE_PARM_DESC(is_fant, "is fantastic");

struct fox {
	unsigned long	 tail_length;
	unsigned long	 weight;
	bool		 is_fantastic;
	struct list_head list;
};

LIST_HEAD(fox_master_list);
void fox_list_add(int, int, bool);
void traverse_fox_list(void);
void del_fox_list(void);

void fox_list_add(int t_len, int wt, bool is_fan)
{
	struct fox *red_fox;

	red_fox = kmalloc(sizeof (*red_fox), GFP_KERNEL);
	red_fox->tail_length = t_len;
	red_fox->weight = wt;
	red_fox->is_fantastic = is_fan;
	INIT_LIST_HEAD(&red_fox->list);
	list_add(&red_fox->list, &fox_master_list);
}

void traverse_fox_list(void)
{
	struct fox *entry;

	list_for_each_entry(entry, &fox_master_list, list)
		pr_info("tail length: %zu weight: %zu is_fantastic: %d\n",
				entry->tail_length, entry->weight, entry->is_fantastic);
}

void del_fox_list(void)
{
	struct fox *p, *tmp;

	pr_info("Deleting fox list node\n");

	list_for_each_entry_safe(p, tmp, &fox_master_list, list) {
		list_del(&p->list);
		kfree(p);
	}

}
static int __init fox_list_init(void)
{
	pr_info("Fox list init\n");

	fox_list_add(tail_len, wght, is_fant);

        traverse_fox_list();
	return 0;
}

static void __exit fox_list_exit(void)
{
	del_fox_list();
	pr_info("Fox list exit\n");
}
module_init(fox_list_init);
module_exit(fox_list_exit);
