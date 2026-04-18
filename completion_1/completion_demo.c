#include <linux/init.h>
#include <linux/module.h>
#include <linux/completion.h>
#include <linux/kthread.h>
#include <linux/delay.h>

MODULE_AUTHOR("Pooja");
MODULE_DESCRIPTION("Completion Demo");
MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1");

static struct completion my_completion;
static struct task_struct *my_thread;

static int worker_thread(void *data)
{
	pr_info("Worker: Starting task and Sleeping for 3 seconds\n");
	msleep(3000);

	pr_info("Worker: Task finished! Signaling Completion....\n");
	complete(&my_completion);

	return 0;
}
static int __init completion_init(void)
{
	pr_info("Demo: Completion Init\n");
	
	init_completion(&my_completion);
	my_thread = kthread_run(worker_thread, NULL, "my_worker_thread");

	pr_info("Main: waiting for worker to finish...\n");
	wait_for_completion(&my_completion);

	pr_info("Init: Signal received! Continuing\n");
	return 0;
}
static void __exit completion_exit(void)
{
	pr_info("Demo: Completion Exit\n");
}
module_init(completion_init);
module_exit(completion_exit);
