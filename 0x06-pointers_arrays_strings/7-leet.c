#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: string to be encoded.
 * Return: s
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char let[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	while (s[i])
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == let[j])
				s[i] = num[j];
			j++;
		}
		i++;
	}
	return (s);
}
