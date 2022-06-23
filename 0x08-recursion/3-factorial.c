#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The input number.
 *
 * Return: if n < 0, the function should return -1 to indicate an error.
 *	if n > 0, the factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
