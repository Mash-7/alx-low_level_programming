#include "main.h"

/**
 * _islower - check for lowecase character.
 * @c: Character to be checked.
 *
 * Return: 1 if character is lowecase, 0 for others.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
