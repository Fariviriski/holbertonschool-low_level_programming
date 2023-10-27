#include "main.h"
/**
 * _strcpy - copies string rom src
 * @src: source array to be copied
 * @dest: destination to be copied to
 * Return: copied array
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
