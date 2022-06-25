#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers, followedby a new line.
 * @argc: The number of command line arguments.
 * @argv: Array containing the program command line arguments.
 *
 * Return: If the program receives two arguments, 0.
 * If the program does not receive two arguments, 1.
 */
int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}
