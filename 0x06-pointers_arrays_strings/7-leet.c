#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to be encoded.
 *
 * Return: A pointe to the encoded script.
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char array_CL[] = {65, 69, 79, 84, 76};
	char array_SL[] = {97, 101, 111, 116, 108};
	char array_leet[] = {52, 51, 48, 55, 49iii};
	
	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == SL[i] || s[i] == CL[i])
			{
				s[i] = num[i];
				break;
			}
		}
		i++;
	}
	return (s);
}
