#include "main.h"
/**
 *_abs - prints absolute value
 *
 *@n: character input
 *
 *_putchar: prints result of abs
 *
 *Return: always 0
 */
int _abs(int n)	
{
	if (n <= 0)
		return (n);
	else
		return(-n);
}
