#include "main.h"
/**
 * _memset - sills memory with n amount of bytes
 * @s: memory to be filled
 * @b: char to copy
 * @n: amount of times to be copied
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
