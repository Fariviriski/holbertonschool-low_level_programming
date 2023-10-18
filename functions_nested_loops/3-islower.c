#include <stdio.h>
#include "main.h"
/**
 *_islower - returns loest char
 *
 * c: input character
 *
 * Return: 0 or 1 if lowercase c
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);

}

