#include "main.h"
/**
 * _strpbrk - searches a string for a set of bytes
 * @s: sring to be searched
 * @accept: string used as search parameter
 * Return: s if match, 0 if null
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
