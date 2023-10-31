#include "main.h"
/**
 * factorial - prints the factorial of a num
 * @n: number to be factorized
 * Return: 0 if natural num -1 if error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));

}
