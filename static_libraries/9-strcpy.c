#include "main.h"
/**
 * _strcpy - copies string rom src
 * @src: source array to be copied
 * @dest: destination to be copied to
 * Return: copied array
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
