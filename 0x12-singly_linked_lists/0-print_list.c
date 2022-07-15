#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes.
 * If str == NULL, print [0] (nil).
 */
size_t print_list(const list_t *h)
{
	size_t nnodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nill)");
		else
			printf("[%d] %s\n", h->len, h->str);
		nnodes++;
		h = h->next;
	}
	return (nnodes);
}
