#include "main.h"

/**
 * print_square - Prints a square using the # character.
 * @size - The size of the square.
 */
void print_square(int size)
{
	int b, h;

	for (b = 0; b < size; b++)
	{
		for (h = 0; h < size; h++)
		{
			_putchar(35);
		}
		if (b != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
