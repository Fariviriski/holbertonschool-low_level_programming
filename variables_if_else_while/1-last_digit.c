#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prog to diplay and compare (><=) the last digit of n
 * Return: Last digit of (n) is (the last digit of n) and its
 * (> than 5, < than 6 and not 0, = is zero)
 *
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int x = n % 10;
	if (x > 5)
{
	printf("Last digit of %d is %x and is greater than 5\n", n);
}
	if (x == 0)
{
	printf("Last digit of %d is %x and is 0\n", n);
}
	if (x < 6, x > 0)
{
	printf("Last digit of %d is %x and is less than 6 and not 0\n", n);
}
	return (0);
}
