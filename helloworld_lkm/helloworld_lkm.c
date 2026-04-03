#include <linux/init.h>
#include <linux/module.h>

MODULE_AUTHOR("Pooja");
MODULE_DESCRIPTION("Hello World!!");
MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1");

static int __init helloworld_lkm_init(void)
{
    pr_info("Hello, World\n");

    return 0;
}
static void __exit helloworld_lkm_exit(void)
{
    pr_info("GoodBye, World! Climate change has done us in...\n");
}
module_init(helloworld_lkm_init);
module_exit(helloworld_lkm_exit);
