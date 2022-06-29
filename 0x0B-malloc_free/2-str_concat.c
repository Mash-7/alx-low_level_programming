#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: On success, pointer to a newly allocated space in memory
 * which contains the contents of the concatenated strings.
 * On faiure, NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *c_str;
	int i, conc = 0, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		l++;

	c_str = malloc(sizeof(char) * l);

	if (c_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		c_str[conc++] = s1[i];

	for (i = 0; s2[i]; i++)
		c_str[conc++] = s2[i];

	return (c_str);
}
