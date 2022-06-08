#include "main.h"

/**
 * print_sign - Determine if number is greater than, equal or less than 0.
 * @n: The number whose sign is to be printed.
 *
 * Return: 1 if nis greater than zero,
 * 0 if n is equal to zero,
 * -1 if n s less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
