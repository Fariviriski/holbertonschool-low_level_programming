#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @i: integer to be reversed
 */
void rev_string(char *s)
{
	int i, len;
	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		int temp;

		temp = s[i];
		s[i] = s[len - i - 1];
		s[len -i - 1] = temp;
	}
}
