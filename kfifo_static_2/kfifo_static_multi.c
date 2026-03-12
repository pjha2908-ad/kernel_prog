#include <linux/init.h>
#include <linux/module.h>
#include <linux/kfifo.h>

#define FIFO_SIZE 8
MODULE_AUTHOR("Pooja");
MODULE_DESCRIPTION("Demo: Static KFIFO multiple elements");
MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1");

static DEFINE_KFIFO(my_int_fifo, int, FIFO_SIZE);

static int __init kfifo_static_multi_init(void)
{
	pr_info("Demo: static kfifo multiple elements init\n");

	int data_array[10] = {10, 20, 30, 40, 50};
	int data_out[10], i;
	unsigned int no_of_copied_ele;

	no_of_copied_ele = kfifo_in(&my_int_fifo, data_array, 5);

	if(!no_of_copied_ele) {
		pr_warn("FIFO is full!!\n");
	} else if(no_of_copied_ele < 5) {
		pr_warn("FIFO had space only for %u elements\n", no_of_copied_ele);
	} else {
		pr_info("Successfully added %u elements in the kfifo\n", no_of_copied_ele);
	}

	no_of_copied_ele = kfifo_out(&my_int_fifo, data_out, 5);
	if(!no_of_copied_ele) {
		pr_err("FIFO is empty!!\n");
	} else if(no_of_copied_ele < 5) {
		pr_warn("FIFO had only %u elements\n", no_of_copied_ele);
	} else {
		pr_info("Successfully read %u elements\n", no_of_copied_ele);
	}
	for(i = 0; i < no_of_copied_ele; i++)
		pr_info("val: %d\n", data_out[i]);

	return 0;
}

static void __exit kfifo_static_multi_exit(void)
{
	pr_info("static kfifo multi elements exit\n");
}
module_init(kfifo_static_multi_init);
module_exit(kfifo_static_multi_exit);
