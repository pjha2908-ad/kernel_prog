/* Write two kernel modules, named core_module and user_module. They must reside
 * in distinct folders (with the same name) under the modstacking2/ folder.
 * Code in the user_module must be able to invoke exported code in the core_module.
 *
 *      user_module
 *          |
 *      core_module           [<--- this code]
 *  The user_module kernel module calls an (exported) function that resides
 *  in the core_module kernel module.
 *
 */

#include <linux/init.h>
#include <linux/module.h>
#include "core_module.h"

MODULE_AUTHOR("Pooja");
MODULE_DESCRIPTION("Demo: Core Module");
MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1");

int core_var = 5;
EXPORT_SYMBOL(core_var);

void print_core_var(void)
{
    pr_info("Core Module: core_var: %d\n", core_var);
}
EXPORT_SYMBOL(print_core_var);

static int __init core_module_init(void)
{
	pr_info("Init: Core Module\n");

	return 0;
}
static void __exit core_module_exit(void)
{
	pr_info("Exit: Core Module\n");
}
module_init(core_module_init);
module_exit(core_module_exit);
