#include "main.h"

/**
 * cap_string - Capitalzes all words of a string.
 * @s: The string to be capitalzed.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;

		if (s[i - 1] == ' ' ||		s[i - 1] == 33 ||
		s[i - 1] == 34 ||
		s[i - 1] == 40 ||
		s[i - 1] == 41 ||
		s[i - 1] == 44 ||
		s[i - 1] == 59 ||
		s[i - 1] == 63 ||
		s[i - 1] == 123 ||
		s[i - 1] == 125 ||
		s[i - 1] == '\t' ||
		s[i - 1] == '\n' ||
		i == 0)
			s[i] -= 32;
		i++;
	}
	return (s);
}
