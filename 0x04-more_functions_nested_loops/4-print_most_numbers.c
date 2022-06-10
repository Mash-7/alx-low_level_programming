#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9 except 2 and 4.
 *
 */
void print_most_numbers(void)
{
	int i = 0;

	for (i = 48; i < 57; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i + 48);
	}
	_putchar('\n');
}
