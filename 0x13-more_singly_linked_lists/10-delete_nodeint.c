#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - Deletes the node at the index
 * of a listint_t linked list.
 * @head: Pointer to the address of the head of the listint_int list
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: On sucess, 1.
 * On faiure -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *j = *head;
	unsigned int i;

	if (j == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(j);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (j->next == NULL)
			return (-1);
		j = j->next;
	}
	temp = j->next;
	j->next = temp->next;
	free(temp);

	return (1);
}
