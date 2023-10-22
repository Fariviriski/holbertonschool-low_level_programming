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
			printf("%d ", n);
		if (n % 3 == 0 && n % 5 != 0)
			printf("Fizz ");
		if (n % 5 == 0 && n % 3 != 0)
			printf("Buzz ");
		if (n % 3 == 0 && n % 5 == 0)
			printf("Fizz Buzz ");
	}
	return (0);
}
