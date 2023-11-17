#include "function_pointers.h"

/**
 * int_index - integer search
 * @array: array for search
 * @size: size of array
 * @cmp: pointer to compare func
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; Index++)
	{
		if(cmp(array[index]) != 0)
			return (i);
	}
	return (-1);
}
