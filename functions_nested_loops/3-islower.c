#include <stdio.h>
#include "main.h"
/**
 *islower - returns loest char
 *
 * Return: 0 or 1 if lowercase c
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else {
		return (0);
	}
}
