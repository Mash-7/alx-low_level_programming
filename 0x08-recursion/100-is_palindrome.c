#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The Length of the string.
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}

/**
 * palin_check - Determines whether a string is a palindrome.
 * @s: The string to be checked.
 * @l: The length of the string.
 *

/**
 * is_palindrome - Determines whether a string is a palindrome.
 * @s: String to be checked.
 *
 * Return: If s is a palindrome, 1.
 * If s is not a palindrome, o.
 */
int is_palindrome(char *s)
{
	if (!(*s))
	       return (1);
return (palindrome(s, l, i));
}
