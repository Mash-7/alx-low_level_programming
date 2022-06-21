#include "main.h"

/**
 * _memcpy -  Copies the memory area.
 * @dest: The destination memory area.
 * @src: The source memory area.
 * @n: The bytes filled.
 * Return: Th pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
