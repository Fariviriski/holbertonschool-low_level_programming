#include <stdio.h>
#include "main.h"
/**
 *print_sign - return 1+ if n>0, 0 if n=0, -1 if n<0
 *
 *n: input character
 *
 *Return: +1,-1,0
 */
int print_sign(int n)
{
	char num;
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
			putchar(0);
		return (0);
	}
	else
	{
			putchar('-');
		return (-1);
	}
}
