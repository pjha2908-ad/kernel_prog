#include <linux/init.h>
#include <linux/module.h>
#include <linux/kfifo.h>


MODULE_AUTHOR("Pooja");
MODULE_DESCRIPTION("Demo: Dynamic KFIFO");
MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1");

//struct kfifo fifo;
DECLARE_KFIFO_PTR(fifo, int);

static int __init kfifo_dynamic_1_init(void)
{
	int ret, i, array_out[10];
	int array_in[10] = { 10, 20, 30, 40, 50 };
	unsigned int no_of_copied_ele;

	pr_info("Demo: Dynamic KFIFO init\n");

	ret = kfifo_alloc(&fifo, PAGE_SIZE, GFP_KERNEL);
	if(ret) {
		pr_err("Out of Memory\n");
		return ret;
	}
	no_of_copied_ele = kfifo_in(&fifo, array_in, 5);
	if(!no_of_copied_ele) {
		pr_err("kfifo is full!!\n");
	} else if(no_of_copied_ele < 5) {
		pr_warn("kfifo had only space for %u elements\n", no_of_copied_ele);
	} else {
		pr_info("Successfully added %u elements in kfifo\n", no_of_copied_ele);
	}

	no_of_copied_ele = kfifo_out(&fifo, array_out, 5);
	if(!no_of_copied_ele) {
		pr_err("kfifo is empty\n");
	} else if(no_of_copied_ele < 5) {
		pr_warn("FIFO only had %u elements\n", no_of_copied_ele);
	} else {
		pr_info("Successfully read %u elements from kfifo\n", no_of_copied_ele);
	}

	for(i = 0; i < no_of_copied_ele; i++) {
		pr_info("val: %d\n", array_out[i]);
	}

	return 0;
}
static void __exit kfifo_dynamic_1_exit(void)
{
	kfifo_free(&fifo);

	pr_info("Demo: Dynamic KFIFO exit\n");
}
module_init(kfifo_dynamic_1_init);
module_exit(kfifo_dynamic_1_exit);
