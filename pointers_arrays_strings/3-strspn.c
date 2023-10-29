#include "main.h"
/**
 * _strspn - Gets the lenght of a prefix substring
 * @s:string to get bytes from
 * @accept: list of bytes in s
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	{

		while (*s)
		{
			char *ptr = accept;
			int found = 0;

			while (*ptr)
			{
				if (*s == *ptr)
				{
					found = 1;
					break;
				}
				ptr++;
			}
			if (!found)
				break;
		}
		count++;
		s++;
	}
	return (count);
}
