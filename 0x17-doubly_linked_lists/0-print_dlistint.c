#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Head of the dlistint_t list.
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int n_node = 0;

	if (h == NULL)
		return(n_node);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		n_node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n_node);
}
