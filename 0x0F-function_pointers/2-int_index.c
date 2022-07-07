#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: The input array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function
 *  to be used to compare values.
 *
 *  Return: If no element matches or size <= 0, -1.
 *  Else, index of the first element for which cmp is not 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
