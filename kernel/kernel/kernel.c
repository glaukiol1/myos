#include <stdio.h>
#include <stdint.h>

#include <kernel/tty.h>
#include <../arch/i386/vga.h>
// #include <kernel/wsleep.h>


void kernel_main(void) {
	terminal_initialize();
	static const size_t VGA_WIDTH = 80;
	printf("Hello, kernel World!\n");
	printf("Newline!\n");
	printf("\tThis is tabbed");
	for (size_t i = 0; i < VGA_WIDTH; i++) {
		for (size_t j = 6; j < 16; j++) {
			terminal_putentryat(' ',vga_entry_color(VGA_COLOR_LIGHT_GREY, VGA_COLOR_LIGHT_GREY), i,j);
		};
	};
}
