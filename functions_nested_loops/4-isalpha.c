#include "main.h"
#include <stdio.h>
/**
 * _isalpha: Defines character as number or alphabetical
 *
 * @c: input character
 *
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
}
