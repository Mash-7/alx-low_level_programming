#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random vald passwords for a program.
 * Return: Always 0.
 */
int main(void)
{
	int i, j, k, l;
	char c[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOQRSTUVWXYZ!@#$%^&*?";
	char pswd[84];

	srand(time(NULL));
	while (l < 2772)
	{
		i = k = l = 0;
		while ((2772 - 122) > l)
		{
			j = rand() % 71;
			pswd[i] = c[j];
			l += c[j];
			i++;
		}
		while (c[k])
		{
			if (c[k] == (2772 - l))
			{
				pswd[i] = c[k];
				l += c[k];
				i++;
				break;
			}
			k++;
		}
	}
	pswd[i] = '\0';
	printf("%s", pswd);
	return (0);
}
