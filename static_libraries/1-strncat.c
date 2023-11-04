#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination for cta
 * @src: source for cat
 * @n: max number of bytes
 * Return: dest concatenated with src
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
