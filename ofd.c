#include <linux/module.h>
#include <linux/init.h>

//MODULE_LICENSE("AYush");


static int moduleInit(void)
{
	printk(KERN_ALERT "Hello, I am here\n");

	return 0;
}

static int moduleExit(void)
{
	printk(KERN_ALERT "Tata,I am not here\n");

	return 0;
}

module_init(moduleInit);
module_exit(moduleExit);


