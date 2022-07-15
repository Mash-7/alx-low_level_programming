#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: The linked list_t list.
 *
 * Return: Number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
