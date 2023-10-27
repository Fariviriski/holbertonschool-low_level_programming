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
int i;

	index = 0;

	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}

	while (index < n)
	{
		dest[index] = '\0';
	index++;
	}
	return (dest);
}

