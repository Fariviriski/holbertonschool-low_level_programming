#include "main.h"
/**
 * void print_alphabet(void);
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}
		putchar('\n');
	return (0);
}
