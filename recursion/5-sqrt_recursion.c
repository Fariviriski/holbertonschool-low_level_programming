#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - primary function to find square root
 * actual_sqrt_recursion - mathematical equation for sqrt
 * @n: number to be checked
 * Return: call to recursion
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - mathematical equation to fnd suqare root
 * @n: number to be cheked
 * @i: integer number
 * Return: natural square root of n
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
