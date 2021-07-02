#include <stdio.h>

#include <kernel/tty.h>
// #include <kernel/wsleep.h>

void kernel_main(void) {
	terminal_initialize();
	printf("Hello, kernel World!\n");
	printf("Newline!");
}
