#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at the index of a
 * dlistint_t linked list.
 * @head: Pointer to the head of the dlistint_t linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: On success, 1.
 * On failure, -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1 = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (h1 == NULL)
			return (-1);
		h1 = h1->next;
	}
	if (h1 == *head)
	{
		*head = h1->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		h1->prev->next = h1->next;
		if (h1->next != NULL)
			h1->next->prev = h1->prev;
	}
	free(h1);
	return (1);
}
