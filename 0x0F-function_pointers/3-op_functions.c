#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds two values.
 * @a: The first value.
 * @b: The second value.
 *
 * Return: The sum of the two values.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two values.
 * @a: The first value.
 * @b: The second value.
 *
 * Return: The difference of the two values.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two values.
 * @a: The first value.
 * @b: The second value.
 *
 * Return: The product of the two vales.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two values.
 * @a: The first value.
 * @b: The second value.
 *
 * Return: The result of the division of the two values.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of
 * the division of two values.
 * @a: The first value.
 * @b:The second value.
 *
 * Return:The remainder of the division.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
