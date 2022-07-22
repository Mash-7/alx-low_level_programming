#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the bit.
 * @index: Index of values starting fom 0.
 *
 * Return: On success, 1.
 * On error, -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
