#include "main.h"

/**
 * strcpy - Copies the string pointed to by src, including the
 * terminating null byte to the buffer pointed to by dest.
 * @dest: The buffer to point the string to
 * @src: The source string to copy.
 *
 * Return: A pointer to @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int str = 0;

	while (str >= 0)
	{
		*(dest + str) = *(src + str);
		if (*(src + str) == '\0')
			break;

		str++;
	}
	return (dest);
}
