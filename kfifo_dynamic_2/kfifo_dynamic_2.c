#include <linux/init.h>
#include <linux/module.h>
#include <linux/kfifo.h>
#include <linux/log2.h>

MODULE_AUTHOR("Pooja");
MODULE_DESCRIPTION("Demo: KFIFO Dynamic Program 2");
MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1");

static int ele[10];
int count;
module_param_array(ele, int, &count, 0644);
MODULE_PARM_DESC(ele, "Buffer Element");

DECLARE_KFIFO_PTR(fifo, int);
int *buffer = NULL, *buffer_out = NULL;
size_t actual_size;

static void buffer_put(void)
{
	unsigned int no_of_copied_ele;

	no_of_copied_ele = kfifo_in(&fifo, ele, count);
	if(!no_of_copied_ele) {
		pr_err("kfifo is full!!\n");
	} else if(no_of_copied_ele < count) {
		pr_warn("kfifo had only space for %u elements\n", no_of_copied_ele);
	} else {
		pr_info("Successfully added %u elements in the kfifo\n", no_of_copied_ele);
	}
}

static int buffer_peek(void)
{
	int no_of_copied_ele;
	buffer_out = kmalloc(actual_size, GFP_KERNEL);
	if(!buffer_out) {
		pr_err("Out of Memory\n");
		return -ENOMEM;
	}
	no_of_copied_ele = kfifo_out(&fifo, buffer_out, count);
	if(!no_of_copied_ele) {
		pr_err("kfifo is empty!!\n");
	} else if(no_of_copied_ele < count) {
		pr_warn("kfifo had only %u elements\n", no_of_copied_ele);
	} else {
		pr_info("Successfully read %u elements\n", no_of_copied_ele);
	}
	return no_of_copied_ele;
}

static void buffer_display(int no_of_copied_ele)
{
	int i;
	if(buffer_out) {
		for(i = 0; i < no_of_copied_ele; i++)
			pr_info("buffer[%d]: %d\n", i, buffer_out[i]);
	}
}

static int __init kfifo_dynamic_2_init(void)
{
	int ret = 0;
	pr_info("Demo: KFIFO Dynamic Program 2 init\n");

	actual_size = roundup_pow_of_two(count * sizeof(int));
	if(actual_size == 0)
		return -EINVAL;

	buffer = kmalloc(actual_size, GFP_KERNEL);
	if(!buffer) {
		pr_err("Out of memory!!");
		return -ENOMEM;
	}
	ret = kfifo_init(&fifo, (int *)buffer, actual_size);
	if(ret) {
		pr_err("kfifo_init failed\n");
		goto err_free_buf;
	}
	
	buffer_put();

	ret = buffer_peek();
	if(ret < 0) {
		goto err_free_out;
	}

	buffer_display(ret);

	return 0;

err_free_out:
	kfree(buffer_out);
err_free_buf:
	kfree(buffer);
	return ret;
}
static void __exit kfifo_dynamic_2_exit(void)
{
	kfree(buffer);
	kfree(buffer_out);
	pr_info("Demo: KFIFO Dynamic Program 2 exit\n");
}
module_init(kfifo_dynamic_2_init);
module_exit(kfifo_dynamic_2_exit);
