#include "main.h"
/**
 *_puts - printer
 *_putchar: used for printing
 * @str: string to be printed
 */

void _puts(char *str)
{
	while(*str)
		_putchar(*str++);
	_putchar('\n');
}
