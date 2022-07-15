#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Head of linked list.
 * @str: String to be added to list.
 *
 * Return: The address of the new element
 * On failure, NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int l;
	char *dup;
	list_t *new = malloc(sizeof(list_t));
	list_t *lnode;

	if (new == NULL)
		return (NULL);
	dup = strdup(str);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (l = 0; str[l];)
		l++;

	new->str = dup;
	new->len = l;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		lnode = *head;
		while (lnode->next == NULL)
			lnode = lnode->next;
		lnode->next = new;
	}
	return (*head);
}
