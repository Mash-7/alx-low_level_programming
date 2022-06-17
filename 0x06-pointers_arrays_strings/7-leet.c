#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to be encoded.
 *
 * Return: A pointe to the encoded script.
 */
char *leet(char *s)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (s[i] == c[j])
			{
				s[i] = num[i];
			}
			j++;
		}
		i++;
	}
	return (s);
}
