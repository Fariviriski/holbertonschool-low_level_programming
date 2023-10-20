#include "main.h"
/**
 * _isdigit - checks to see if its a numerical char
 * @c: inout character
 *
 * Return: 1 if digit, of if else
 */
int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
