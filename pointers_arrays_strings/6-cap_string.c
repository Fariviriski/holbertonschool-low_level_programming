#include "main.h"
/**
 * cap_string - capitalize first letter of each word in a string
 * @s: string to be scanned and capitalized
 * Return: string with each word capitalized
 */

char *cap_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			char tmp;

			tmp = s[i - 1];
			if (tmp == '\t' || tmp == '\n')
				s[i] = s[i] - 32;

			if (tmp == '{' || tmp == '}')
				s[i] = s[i] - 32;

			if (tmp == '(' || tmp == ')')
				s[i] = s[i] - 32;

			if (tmp == ',' || tmp == '.' || tmp == ';')
				s[i] = s[i] - 32;

			if (tmp == '?' || tmp == '!')
				s[i] = s[i] - 32;

			if (tmp == ' ' || tmp == '"')
				s[i] = s[i] - 32;

			if (i == 0)
				s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
