#include <stdio.h>

/**
 * main - Print the program name followed by a new line.
 * @argc: Number of command line arguments supplied.
 * @argv: Array that contains the program command line arguments.
 * Return: Always 0
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
