#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int str = 0;

	while (str >= 0)
	{
		if (s[str] == '\0')
			break;
		str++;
	}

	for (str--; str >= 0; str--)
		_putchar(s[str]);
	_putchar('\n');
}
