#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the listint_t list.
 * @index: Index of node to locate, starting at 0.
 *
 * Return: The nth node of the linked list.
 * If the node does not exist, NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
