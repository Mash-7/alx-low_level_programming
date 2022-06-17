#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: input string
 * Return: The pointer to dest.
 */
char *cap_string(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		if (j == 0 && s[j] >= 97 && s[j] <= 122)
			s[e] = s[e] - 32;
		if (s[j] >= 97 && s[e] <= 122)
		{
			if (s[j - 1] == 32 || s[j - 1] == '\t' ||
					s[j - 1] == '\n' ||
					s[j - 1] == 44 ||
					s[j - 1] == 59 || s[j - 1] == 46 ||
					s[j - 1] == 33 || s[j - 1] == 63 ||
					s[j - 1] == 34 || s[j - 1] == 40 ||
					s[j - 1] == 41 || s[j - 1] == 123 ||
					s[j - 1] == 124)
				s[j] = s[j] - 32;
		}
	}
	return (s)
}
