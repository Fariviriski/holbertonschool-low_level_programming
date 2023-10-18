#include <stdio.h>
/**
 * main - prints alphabet
 *
 * Return: always 0
 */
int void print_alphabet(void);
int main(void)
{
	char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
			putchar(alpha);
		putchar('\n');
	return (0);
}
