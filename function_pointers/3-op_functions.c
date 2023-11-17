#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two integers
 * @a: integer 1
 * @b: integer 2
 * Return: the sum of two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers
 * @a: first num
 * @b: second num
 * Return: the result of a substraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - divides twp integers
 * @a: integer 1
 * @b: integer 2
 * Return: the division of two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mul - multiplies two integers
 * @a: integer 1
 * @b: integer 2
 * Return: the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - returns remainder of division
 * @a: integer 1
 * @b: integer 2
 * Return: the remainder of a div
 */

int op_mod(int a, int b)
{
	return (a % b);
}
