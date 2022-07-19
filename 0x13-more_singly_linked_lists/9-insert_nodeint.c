#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the address of the head of listint_t list.
 * @idx: Index of the list where the new node should be added.
 * Index starts at 0.
 * @n: Integer.
 *
 * Return: address of the new node
 * On failure, NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *j = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = j;
		*head = new;
		return (new);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (j == NULL || j->next == NULL)
			return (NULL);
		j = j->next;
	}
	new->next = j->next;
	j->next = new;

	return (new);
}
