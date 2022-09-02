#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the head of the dlistint_t list.
 * @n: The new node.
 *
 * Return: On success, the address of the new element.
 * On failure, NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node, *e_node;

	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		n_node->prev = NULL;
		*head = n_node;
		return (n_node);
	}
	e_node = *head;
	while (e_node->next != NULL)
		e_node = e_node->next;
	e_node->next = n_node;
	n_node->prev = e_node;

	return (n_node);
}
