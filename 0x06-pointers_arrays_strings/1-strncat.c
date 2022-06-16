#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination.
 * @src: The source.
 * @n: The amount f bytes used from src.
 * Return: The pointer to the resulting sting dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i])
	{
		len++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[len++] = src[i];
	}

	return (dest);
}
