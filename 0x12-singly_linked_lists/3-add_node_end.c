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
	list_t *lnode = *head;

	if (new == NULL)
		return (NULL);

	new->len = size;
	new->next = NULL;
	new->str = strdup(str);

	if (new->str)
		while (str[size])
			size++;

	if (lnode == NULL)
		*head = new;

	else
	{
		lnode = *head;
		while (lnode->next == NULL)
			lnode = lnode->next;
		lnode->next = new;
	}
	return (new);
}
