#include "main.h"
/**
 * print_number - prints a character
 * _purchar - print funct
 * @c: input character
 */
void print_numbers(void)
{
	int c;
	for ( c = 0; c > 10; c++)
		_putchar((c % 10) + '0');
}
