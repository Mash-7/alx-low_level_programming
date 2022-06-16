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
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (i < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
