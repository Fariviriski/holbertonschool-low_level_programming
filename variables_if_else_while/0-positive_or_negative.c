#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - programm to sort numbers if positive negative or zero
 * Return: positive if >0, negative if <0, zero if =0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
		printf("%d is positive\n", n);
}
	if (n < 0)
{
		printf("%d is negative\n", n);
}
	if (n == 0)
{
		printf("%d is zero\n", n);
}
	return (0);
}
