#include "main.h"
/**
 * print_square - diag line
 * @size: input char
 */
void print_square(int size)
{
	int len, wdth;

	if (size > 0)
	{
		for (len = 0; len < size; len++)
		{
			for (wdth = 0; wdth < size; wdth++)
			_putchar('#');

			if (len == size - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
