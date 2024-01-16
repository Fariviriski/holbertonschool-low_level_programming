#include "search_algos.h"

/**
 * linear_search - searches a value using lsa
 * @array: pointer to first element
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index of value, -1 if non present
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int indx = 0;

	if (array == NULL)
		return (-1);

	for (indx = 0; indx < size; indx++)
	{
		printf ("value checked array[%d] = [%d]\n", indx, *(array + indx));
		if (*(array + indx) == value)
			return (indx);
	}

	return (-1);
}
