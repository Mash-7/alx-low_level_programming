#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked list.
 * @h: Head of the dlistint_t list.
 *
 * Return: Number of elements in a lined list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_elem = 0;

	while (h)
	{
		n_elem++;
		h = h->next;
	}
	return (n_elem);
}
