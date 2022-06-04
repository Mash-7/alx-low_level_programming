#include <stdio.h>

/**
 * main - Print numbers between 00 and 89
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, k;

	i = 48;
	k = 48;

	while (k < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (k != i && k < i)
			{
				putchar(k);
				putchar(i);
				if (i == 57 && k == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		k++;
	}
	putchar('\n');
	return (0);
}
