#include <linux/init.h>
#include <linux/module.h>

MODULE_AUTHOR("Pooja");
MODULE_DESCRIPTION("Demo: User Module");
MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1");

extern int core_var;
extern void print_core_var(void);

static int __init user_module_init(void)
{
	pr_info("Init: User Module\n");
        pr_info("user_module: core_var: %d\n", core_var);
	pr_info("Calling print_core_var() function from user_module\n");
	print_core_var();
	return 0;
}
static void __exit user_module_exit(void)
{
	pr_info("Exit: User Module\n");
}
module_init(user_module_init);
module_exit(user_module_exit)
