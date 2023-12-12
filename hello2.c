// hello2.c
#include <linux/module.h>
#include <linux/printk.h>

MODULE_AUTHOR("Andrii Shnaidruk <ashnaidruk56@gmail.com>");
MODULE_DESCRIPTION("Hello, world in Linux Kernel Training");
MODULE_LICENSE("Dual BSD/GPL");

int i = 0;

void print_hello2(unsigned int counter) {
    for (i = 0; i < counter; i++) {
        pr_info("Hello, world from hello2!\n");
    }
}
EXPORT_SYMBOL(print_hello2);
