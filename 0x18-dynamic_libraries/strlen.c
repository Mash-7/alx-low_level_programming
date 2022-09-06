#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: input string.
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
	int str = 0;

	while (*(s + str) != '\0')
		str++;
	return (str);
}
