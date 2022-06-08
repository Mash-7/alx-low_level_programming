#include <stdio.h>
#include "main.h"

/**
 * main - Print the alphabet in lowercase followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
