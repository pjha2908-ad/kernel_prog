/* Write a kernel module called mycaller.c. It must invoke a library routine
called product that lives within another C file (mylib.c), whose signature
is:
	int product(int a, int b); 
and will return the value (a*b). */

#include <linux/init.h>
#include <linux/module.h>
#include "mylib.h" 

MODULE_AUTHOR("Pooja");
MODULE_DESCRIPTION("Demo: lib");
MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1");

int product(int, int);

static int var1 = 1;
module_param(var1, int, 0644);

static int var2 = 1;
module_param(var2, int, 0644);

static int __init myCaller_init(void)
{
	int result = 0;
	pr_info("Init: libtest\n");

	result = product(var1, var2);
        pr_info("result: %d\n", result);

	return 0;
}
static void __exit myCaller_exit(void)
{
	pr_info("Exit: libtest\n");
}
module_init(myCaller_init);
module_exit(myCaller_exit);
