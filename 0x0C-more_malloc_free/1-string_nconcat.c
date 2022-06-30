#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The amount of bytes.
 *
 * Return: On success, pointer to the allocated memory.
 * on failure, NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c_str;
	unsigned int i, ls;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		ls++;

	c_str = malloc(sizeof(char) * (ls + 1));

	if (c_str == NULL)
		return (NULL);

	ls = 0;

	for (i = 0; s1[i]; i++)
		c_str[ls++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		c_str[ls++] = s2[i];

	c_str[ls] = '\0';

	return (c_str);
}
