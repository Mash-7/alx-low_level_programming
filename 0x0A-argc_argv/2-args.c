#include <stdio.h>

/**
 * main - Prints all the arguments the progam receives.
 * @argc: The number of comand line arguments.
 * @argv: Array that contains the prgram command line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
