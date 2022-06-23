#include "main.h"

/**
 * primeCheck - Determines whether the input value is a prime number.
 * @num: Input value.
 * @i: divisor
 * Return: If num is a prime number, return 1.
 * If num is not a prime number, return 0.
 */
int primeCheck(int num, int i)
{
	if (num % i == 0)
		return (0);

	if (i == num / 2)
		return (1);

	return (primeCheck(num, i + 1));
}

/**
 * is_prime_number - Determines whether the input value is a prime number.
 * @n: the input value.
 *
 * Return: if n is a prime number, 1.
 * if n is not a prime number, 0.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);

	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (primeCheck(n, 2));
}
