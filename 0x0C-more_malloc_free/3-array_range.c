#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value of the array.
 * @max: The maximum value of the array.
 *
 * Return: The pointer to the newly created array.
 * If main > max or function fails, NULL.
 */
int *array_range(int min, int max)
{
	int *ar, i, s_ar;

	if (min > max)
		return (NULL);

	s_ar = max - min + 1;

	ar = malloc(sizeof(int) * s_ar);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < s_ar; i++)
		ar[i] = min++;

	return (ar);
}
