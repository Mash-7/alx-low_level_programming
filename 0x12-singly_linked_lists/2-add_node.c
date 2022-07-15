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
	int l;
	char *dup;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (l = 0; str[l];)
		l++;

	new->len = l;
	new->str = dup;
	new->next = *head;

	*head = new;
	return (new);
}
