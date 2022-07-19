#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - Returns the sum of all the data (n) of
 * a listint_t linked list.
 * @head: Pointer to the head of the listint_t list.
 *
 * Return: Sum of the data.
 * If the list is empty, 0.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
