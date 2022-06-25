#include <stdio.h>

/**
 * main - Prints the numer of arguments passed into the program.
 * @argc: The number of command line arguments.
 * @argv: Array that contains the program command line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
