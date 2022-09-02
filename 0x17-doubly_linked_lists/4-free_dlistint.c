#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *jiyu;

	while (head)
	{
		jiyu = head->next;
		free(head);
		head = jiyu;
	}
}
