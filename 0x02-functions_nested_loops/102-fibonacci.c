#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int fn1 = 1, fn2 = 2, fn;

	printf("%ld, %ld", fn1, fn2);
	for (i = 1; i < 50; i++)
	{
		fn = fn1 + fn2;
		printf(", %ld", fn);
		fn1 = fn2;
		fn2 = fn;
	}
	printf("\n");
	return (0);
}
