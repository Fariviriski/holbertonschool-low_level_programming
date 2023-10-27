#include "main.h"
/**
 * _strcpy - copies string rom src
 * @src: source array to be copied
 * @dest: destination to be copied to
 * Return: copied array
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
