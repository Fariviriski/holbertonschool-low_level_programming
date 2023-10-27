#include "main.h"
/**
 * _strcmp - compares two strings
 * @index: index of a string
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal, -1 if lesser, 1 if greater
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}