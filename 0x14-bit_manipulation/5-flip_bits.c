#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Returns the number of bits one needs to be flipped
 * to get from one number to another.
 * @n: Given number.
 * @m: Number to flip n to.
 *
 * Return: Number of bits one needs to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit;

	for (bit = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		bit++;
	}
	return (bit);
}
