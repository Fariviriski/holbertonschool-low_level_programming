#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be id
 * Return: haystack if found, null if not
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; *haystack != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
			if (*haystack == needle[j])
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}

