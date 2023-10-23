#include "main.h"
/**
 *_puts - printer
 *_putchar: used for printing
 * @str: string to be printed
 */

void _puts(char *str)
{
int count = 0;

	while(str[count] != '\0')
	{
	_putchar(str[count]);
	count++;
	}
	_putchar('\n');
}
