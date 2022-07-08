#include "3-calc.h"

/**
 * main - Performs simple operations.
 * @argc: The number of arguments supplied.
 * @argv: Array of pointers.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *ops;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	ops = argv[2];
	num2 = atoi(argv[3]);

	if (ops == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (get_op_func(ops) == NULL || ops[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(ops)(num1, num2));
	return (0);
}
