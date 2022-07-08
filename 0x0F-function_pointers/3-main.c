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

	if ((*ops == '/' && num2 == 0) ||
			(*ops == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(ops) == NULL || ops[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ops = argv[2];

	printf("%d\n", get_op_func(ops)(num1, num2));
	return (0);
}
