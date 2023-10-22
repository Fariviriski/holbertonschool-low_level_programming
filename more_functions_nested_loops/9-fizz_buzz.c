#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 != 0 && n % 5 != 0)
			printf("%d\n ", n);
		if (n % 3 == 0 && n % 5 != 0)
			printf("Fizz\n ");
		if (n % 5 == 0 && n % 3 != 0)
			printf("Buzz\n ");
		if (n % 3 == 0 && n % 5 == 0)
			printf("Fizz Buzz\n ");
	}
	return (0);
}
