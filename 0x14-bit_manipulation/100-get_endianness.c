#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big endian, 0.
 * If little endian, 1.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *e = (char *) &i;

	return ((int)*e);
}
