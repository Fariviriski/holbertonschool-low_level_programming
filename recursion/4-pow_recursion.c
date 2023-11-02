#include "main.h"
/**
 * _pow_recursion - raises x to the power of y
 * @x: value to be raised
 * @y: power to be raised
 * Return: -1 if less than 0, 1 if equal to zero, value of exponent
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)

		return (-1);

	if (y == 0)

		return (1);

	return (x * _pow_recursion(x, y - 1));
}
