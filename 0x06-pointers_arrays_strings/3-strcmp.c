#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: If s1 == s2, 0.
 * If s1 < s2 the negative difference between the first unmatched characters
 * if s1 > s2 the positive difference between the first unmatched characters
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0' && j == 0)
	{
		i = s1[i] - s2[i];
		i++;
	}
	return (j);
}
