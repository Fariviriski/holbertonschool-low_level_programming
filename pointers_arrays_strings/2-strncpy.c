#include "main.h"
/**
 * _strncpy - copies string len
 * @dest: destination for ze copy
 * @src: source to be copied
 * @n: max numerals
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

		while (src[index++])
			src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = '\0';

	return (dest);
}

