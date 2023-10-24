#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the element of the array
 * @a: array to be printed
 * @n: elements of array
 */

void print_array(int *a, int n)
{
	int len = sizeof(a);

	for (n = 0; n < len; n++)
	{
		printf("%d, ", a[n]);
	}
}
