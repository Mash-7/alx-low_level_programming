#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase followed by a new line.
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	putchar('\n');
	return (0);
}
