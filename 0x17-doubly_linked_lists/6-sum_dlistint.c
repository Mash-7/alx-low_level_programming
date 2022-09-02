#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: Pointer to the head of the dlistint_t list.
 *
 * Returns: the sum of the data.
 * If the list i empty, 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int gokei = 0;

	while (head)
	{
		gokei += head->n;
		head = head->next;
	}
	return (gokei);
}
