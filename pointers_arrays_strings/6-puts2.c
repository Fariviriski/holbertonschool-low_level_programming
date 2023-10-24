#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be reversed
 */

void puts2(char *str)
{
	int i, len;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (len = 0; len < i; len += 2)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
