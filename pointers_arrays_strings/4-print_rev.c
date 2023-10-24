#include "main.h"
/**
 * _strlen - check len
 * _putchar: prints reverse string
 *
 */

void rev_string(char *s)
{
	int i, len, temp;

	len = _strlen(s) -1;
	for (i = 0; i < _strlen(s)/2; i++)
			{
			temp = s[i];
			s[i] = s[len];
			s[len--]=temp;
			}
			_putchar(*s);
			}

