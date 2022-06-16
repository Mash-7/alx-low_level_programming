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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (i ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
