#include <stdlib.h>
#include "main.h"

/**
 * _strdup - pointer to new memory with cpy of str
 * @str: string to be copied
 * Return: NULL if str is NULL, othrwise pointer
 */

char *_strdup(char *str)
{
	char *dplct;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	dplct = malloc(sizeof(char) * (len + 1));

	if (dplct == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		dplct[index] = str[index];

	dplct[len] = '\0';

	return (dplct);
}
