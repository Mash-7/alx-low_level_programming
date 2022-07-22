#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number.
 * If b is NULL or contains chars which are not 0 or 1, 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, prod = 1;
	int len;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		i += (b[len] - '0') * prod;
		prod *= 2;
	}
	return (i);
}
