#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers, followed by a new line.
 * @argc: The number of command line arguments.
 * @argv: Array that containsthe program command line arguments.
 *
 * Return: If one of the numbers contains symbols that are not digits, 1.
 * If no number is passed to the program, 0, followed by a new line
 */
int main(int argc, char *argv[])
{
	int i, d, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (d = 0; argv[i][d]; d++)
		{
			if (argv[i][d] < '0' || argv[n][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
