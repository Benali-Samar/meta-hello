#include <linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>

static int hello_init(void){
printk("hello, this is your first driver that will just print this in logs :) \n");
return 0;
}


static void hello_exit (void){
printk("Good bye, There is no point to keep it in kernel memo for no reason ^^  \n");
}

module_init(hello_init);
module_exit(hello_exit);


MODULE_AUTHOR ("ME hihi :P ");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION(" A hello world driver");
