#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the dlistint_t list.
 * @idx: Index of the list the new node is to be added.
 * @n: The new node.
 *
 * Return: The address of the new node.
 * On failure or it is not possible to add a new node, NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node, *h1 = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		h1 = h1->next;
		if (h1 == NULL)
			return (NULL);
	}
	if (h1->next == NULL)
		return (add_dnodeint_end(h, n));
	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = h1;
	n_node->next = h1->next;
	h1->next->prev = n_node;
	h1->next = n_node;

	return (n_node);
}
