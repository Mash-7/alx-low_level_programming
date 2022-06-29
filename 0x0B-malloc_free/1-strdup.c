#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to be copied.
 *
 * Return: if str == NULL or if insufficient memory is available, NULL.
 * On success - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *cpy;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	cpy = (char *)malloc(sizeof(char) * (i + 1));

	if (cpy == NULL)
		return (NULL);

	for (l = 0; l <= i; l++)
		cpy[l] = str[l];

	return (cpy);
}
