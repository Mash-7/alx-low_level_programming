#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The storaged char.
 *
 * Return: Pointer to the array
 * if it fails, NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
