#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to bit.
 * @index: Index of the set value, starting from 0.
 *
 * Return: On success, 1.
 * On error, -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);

	return (1);
}
