#include "main.h"
/**
 * print_triangle - print triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int t, r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (r = 1; r <= size; r++)
	{
		for (t = 1; t <= size; t++)
		{
			if ((size - r) >= t)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
