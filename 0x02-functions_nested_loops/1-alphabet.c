#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase followed by a new line.
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
