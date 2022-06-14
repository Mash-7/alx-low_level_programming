#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: input string
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char str;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		str = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = str;
	}
}
