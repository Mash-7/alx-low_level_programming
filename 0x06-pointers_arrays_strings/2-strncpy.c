#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: The destination.
 * @src: The source.
 * @n: The amount of bytes from src.
 * Return: The pointer to the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[i++])
	{
		len++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = len; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
