#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - Deletes  the head node of a listint_t linked list.
 * @head: Pointer to the address of the listint_t list.
 *
 * Return: Thr node's data (n).
 * If the list is empty, 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);

	temp = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (i);
}
