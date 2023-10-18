#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - 10 times a-z
 *
 * Return: always 0
 */
void print_alphabet_x10(void) 
{
	char alpha;
	int i = 0;

	while (i++ <= 9)
	{
			for (alpha = 'a'; alpha <= 'z'; alpha ++)
			{
				putchar(alpha);
			}
		putchar('\n');
		alpha ++;
	}
}

