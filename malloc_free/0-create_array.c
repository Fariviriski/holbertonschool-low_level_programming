#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array and init with spec char
 * @size: size of array to be created
 * @c: the specific char for init
 * Return: NULL if size = 0 or if func null
 *         otherwise point to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
