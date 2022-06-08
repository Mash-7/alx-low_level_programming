#include <stdio.h>

/**
 * main - Find and print the sum of even-valued Fibonacci terms
 * less than 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int fn1 = 1, fn2 = 2, fn = 0, fne = 0;

	while (fn <= 4000000)
	{
		fn = fn1 + fn2;
		fn1 = fn2;
		fn2 = fn;
		if ((fn1 % 2) == 0)
		{
			fn += fn1;
		}
	}
	printf("%ld\n", fne);
	return (0);
}

