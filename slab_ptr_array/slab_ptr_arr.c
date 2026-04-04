/*  Write a kernel module that, within its init code,
 *  allocates slab memory with the kmalloc() API to an array of five pointers;
 *  that is, each pointer gets 1 KB of slab memory, like this:
 *
 *  +-------+-------+-------+-------+-------+
 *  |0  .   |1  .   |2  .   |3  .   |4  .   |
 *  +---|---+---|---+---|---+---|---+---|---+
 *  v       v       v       v       v
 *  +---+   +---+   +---+   +---+   +---+
 *  |mem|   |mem|   |mem|   |mem|   |mem| <-- 1 KB each
 *  +---+   +---+   +---+   +---+   +---+
 *
 *  Then, initialize the buffers to as, bs, cs, ds, and es, respectively. In the
 *  cleanup code, free up the memory. Tip: take care to handle the error case
 *  where a memory allocation fails. Don't forget to free the allocations already
 *  successfully performed!
 *
 */ 


#include <linux/init.h>
#include <linux/module.h>
#include <linux/slab.h>

#define SLAB_MAXLOOP	5

MODULE_AUTHOR("Pooja");
MODULE_DESCRIPTION("Demo: slab Memory Allocation");
MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1");

static char  *gkptr[SLAB_MAXLOOP];

static int __init slab_ptr_arr_init(void)
{
	int i = 0, j;

	pr_info("Inserted: %s\n", KBUILD_MODNAME);

	while(i < SLAB_MAXLOOP) {
		gkptr[i] = kmalloc(1024, GFP_KERNEL);
		if(!gkptr[i]) {
			pr_warn("%s: kmalloc iteration %d failed\n", KBUILD_MODNAME, i);
			goto cleanup;
		}
		memset(gkptr[i], i+0x61, 1024);
		print_hex_dump_bytes("gkptr: ", DUMP_PREFIX_NONE, gkptr[i], 16);
		i++;
	}
	return 0;
cleanup:
	for(j = i; j > 0; j++) {
		pr_debug("freeing gkptr[%d]\n", j);
		kfree(gkptr[j]);
	}
	return -ENOMEM;
}
static void __exit slab_ptr_arr_exit(void)
{
	int i;

	for(i = 0; i < SLAB_MAXLOOP; i++ ) {
		pr_debug("%s: freeing gkptr[%d]\n", KBUILD_MODNAME, i);
		kfree(gkptr[i]);
	}
	pr_info("Exit: %s\n", KBUILD_MODNAME);
}
module_init(slab_ptr_arr_init);
module_exit(slab_ptr_arr_exit);
