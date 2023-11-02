#include "main.h"
int ap(int n, int i);
/**
 * is_prime_number - checksa to see if its 1 or 0, calls to recursion
 * @n: number to check
 * Return: 0 if not prime, recursive func
 */
int is_prime_number(int n)
{
	if (n == 1 && n == 0)
		return (0);
	return (ap(n, n - 1));
}

/**
 * ap - mathematical equation for prime numbers
 * @n: number to be cheked
 * @i: iterator
 * Return: 1 if prime 0 otherwise
 */
int ap(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (ap(n, i - 1)	);
}
