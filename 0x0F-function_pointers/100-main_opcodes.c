#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The arguments supplied.
 * @argv: Array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, nb;
	char *opcode = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nb = atoi(argv[1]);

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nb; i++)
	{
		printf("%02x", opcode[i] & 0xFF);

		if (i != nb - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
