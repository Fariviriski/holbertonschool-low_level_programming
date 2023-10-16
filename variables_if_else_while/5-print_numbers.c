#include <stdio.h>
/**
 * main - prints single digit numbers base of 10
 *
 * Return: 0123456789
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");

	return (0);
}
