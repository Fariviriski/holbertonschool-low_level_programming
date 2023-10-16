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
		printf("n is positive");
}
	if (n < 0)
{
		printf("n is negative");
}
	if (n == 0)
{
		printf("n is zero");
}
	return (0);
}
