#include "main.h"

/**
 *nat_sqrt - Finds the natural square root of input value.
 * @num: The input value.
 * @rt: The root to be checked.
 *
 * Return: The natural square root.
 * if none exists, return -1.
 */

int nat_sqrt(int num, int rt)
{
	if ((rt * rt) == num)
		return (rt);

	if (rt == num / 2)
		return (-1);

	return (nat_sqrt(num, rt + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The input value.
 *
 * Return: if n does not have a natural square root, return -1.
 * else, return the value of the natural square root.
 */
int _sqrt_recursion(int n)
{
	int rt = 0;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	return (nat_sqrt(n, rt));
}
