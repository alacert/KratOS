#include <stdio.h>

#include <kernel/tty.h>

void kernel_main(void) {
	terminal_initialize();
	printf("terminal initialized\n");
	printf("kratos finished initializing\n");
	printf("-------------------------------\n");
	printf("kratos version 0.1 build 2018-06-14\n");
	printf("kratos is developed by arthur williams and released under the MIT license\n");
	printf("view the source code at github.com/arthur-williams/kratos\n");
	printf("this is a project for learning, please don't sue me if i do something wrong (-:\n");
}
