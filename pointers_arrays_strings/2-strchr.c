#include "main.h"
/**
 * _strchr - funvtion to locate a character in a string
 * @c: character to be found
 * @s: string to search in
 * Return: pointer to first occrence or 0
 */

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (0);
		}
	}
}
