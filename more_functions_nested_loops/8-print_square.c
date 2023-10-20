#include "main.h"
/**
 * print_square - diag line
 * @size: input char
 */
void print_square(int size)
{
	int len, space;

	if (size > 0)
	{
		for (len = 0; len < size; len++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('##');

			if (len == size - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
