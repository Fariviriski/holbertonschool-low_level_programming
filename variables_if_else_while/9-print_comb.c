#include <stdio.h>
/**
 * main - prints all combinations of single digit numbers
 *
 * Return: always 0
 */
int main(void)
{
		 int n;

		for (n = 0; n <= 9; n++)
			{
			putchar(n % 10);
			if (n == 9)
				continue;
			putchar(',');
			putchar(' ');
			}
		printf("\n");

		return (0);
}
