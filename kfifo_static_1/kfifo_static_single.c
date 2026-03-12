#include <linux/init.h>
#include <linux/module.h>
#include <linux/kfifo.h>

#define FIFO_SIZE 8

MODULE_AUTHOR("Pooja");
MODULE_DESCRIPTION("Demo: static FIFO");
MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1");

static DEFINE_KFIFO(my_int_fifo, int, FIFO_SIZE);

static int __init kfifo_static_init(void)
{
	int i = 0, val;
	pr_info("kfifo static init\n");

	/* Put the data in FIFO */
	for(i = 0; i < FIFO_SIZE; i++) {
		if(kfifo_put(&my_int_fifo, i + 1))
			pr_info("val: %d added to the fifo\n", (i + 1));
	}
	/* Get the data from FIFO */
	for(i = 0; i < FIFO_SIZE; i++) {
		if(kfifo_get(&my_int_fifo, &val))
			pr_info("Retrieved val: %d from FIFO\n", val);
	}

	return 0;
}

static void __exit kfifo_static_exit(void)
{
	pr_info("kfifo static exit\n");
}
module_init(kfifo_static_init);
module_exit(kfifo_static_exit);
