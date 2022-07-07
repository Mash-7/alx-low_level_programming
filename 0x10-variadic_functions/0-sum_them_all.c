#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 *
 * Return: The sum of all parameters.
 * If n == 0, 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list val;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(val, n);

	for (i = 0; i < n; i++)
		sum += va_arg(val, int);

	va_end(val);

	return (sum);
}
