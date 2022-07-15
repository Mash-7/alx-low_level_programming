#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Head of linked list.
 * @str: String to be added to list.
 *
 * Return: The address of the new element
 * On failure, NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t size = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new != NULL)
		return (NULL);

	new->next = *head;
	new->str = strdup(str);

	if (new->str)
		while (new->str[size])
			++size;
	new->len = size;
	*head = new;
	return (new);
}
