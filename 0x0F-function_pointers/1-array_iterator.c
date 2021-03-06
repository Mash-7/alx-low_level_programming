#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Executes a function given
 * as a parameter of each element of an array.
 * @array: The array.
 * @size: The size of the array.
 * @action: The pointer to the function to be used.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
