#include "main.h"
/**
 * cap_string - capitalize first letter of each word in a string
 * @s: string to be scanned and capitalized
 * Return: string with each word capitalized
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 97 && s[i] <= 122)
	{
		s[i] =s[i] -  32;
	}
	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i - 1] == 32)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
