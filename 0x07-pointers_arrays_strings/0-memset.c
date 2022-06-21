#include "main.h"

/**
 * _memset - Fills memory witha constant byte.
 * @s: A pointer to the mempry area.
 * @n: The number of bytes to be filled.
 * @b: Constant bye.
 * Return: The pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
