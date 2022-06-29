#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: The width of the array.
 * @height: The height of the array.
 *
 * Return: if width or height <= 0 or function fails, NULL
 * On success, pointer to a 2 dimensional aray of integers.
 */
int **alloc_grid(int width, int height)
{
	int **D2;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	D2 = malloc(sizeof(int *) * height);

	if (D2 == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		D2[h] = malloc(sizeof(int) * width);

		if (D2[h] == NULL)
		{
			for (h--; h >= 0; h--)
				free(D2[h]);
			free(D2);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			D2[h][w] = 0;
	}
	return (D2);
}
