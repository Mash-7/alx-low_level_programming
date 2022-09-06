#include "main.h"

/**
 * _strpbrk - Searches the sring for any set of bytes.
 * @s: The firt string to be searched.
 * @accept: The second string to be searched.
 *
 * Return: Pointer to thebyte in s that matches one of the bytes
 * in accept, or NULL if no suh byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, b;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + i) == *(accept + b))
				return (s + i);
		}
	}
	return ('\0');
}
