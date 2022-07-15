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
	size_t size;
	list_t *new = malloc(sizeof(list_t));
	list_t *lnode;

	lnode = *head;

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (size = 0; new->str[size] != '\0'; size++)
		;
	new->len = size;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (lnode->next != NULL)
		{
			lnode = lnode->next;
		}
		new->next = (lnode)->next;
	       (lnode)->next = new;
	}
	return (*head);
}
