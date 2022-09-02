#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Head of the dlistint_t list.
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n_node++;
		h = h->next;
	}
	return (n_node);
}
