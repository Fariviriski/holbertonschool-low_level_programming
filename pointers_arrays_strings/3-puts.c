#include "main.h"
/*
 *_putchar - printer
 *
 */

void _puts(char *str)
{
	while(*str)
		_putchar(*str++);
}
