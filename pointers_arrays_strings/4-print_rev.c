#include "main.h"
/**
 * _strlen - check len
 * _putchar: prints reverse string
 *
 */

void rev_string(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (indez = len -1; index >= 0; index --)
		_putchar(s[index]);

	_putchar(('\n');
			}

