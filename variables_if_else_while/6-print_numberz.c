#include <stdio.h>
#include "main.h"
/**
 * main - prints single digit numbers base of 10 no print f :(
 *
 * Return: 0123456789
 */
int main(void)
{
		int n;

		for (n = '0'; n <= '9'; n++)

			putchar(n);
		putchar('\n');
	return (0);
}
