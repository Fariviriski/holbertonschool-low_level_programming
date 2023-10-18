#include <stdio.h>
/**
 * main - prints single digit numbers base of 16 no print f :(
 *
 * Return: numbers base 16
 */
int main(void)
		{
				int n;
				char lett;

				for (n = 0; n < 10; n++)
					putchar(n + '0');
				for (lett = 'a'; lett <= 'f'; lett++)
				{
					putchar(lett);
				}

					putchar('\n');
	return (0);
		}
