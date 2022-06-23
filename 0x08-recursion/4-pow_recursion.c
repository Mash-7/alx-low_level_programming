#include "main.h"

/**
 * _pow_recursion - Returns th value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: if y < 0, -1.
 * if y > 0, the value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}
