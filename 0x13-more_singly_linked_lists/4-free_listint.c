#include "lists.h"
#include <stdio.h>

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
