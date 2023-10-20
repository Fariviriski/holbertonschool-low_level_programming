#include "main.h"
/**
 * print_number - prints a character
 * _purchar - print funct
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
