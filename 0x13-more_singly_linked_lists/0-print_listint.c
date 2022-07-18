#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t.
 * @h: Pointer of the head of the list_t lists.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t n_node = 0;

	while (h)
	{
		n_node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n_node);
}
