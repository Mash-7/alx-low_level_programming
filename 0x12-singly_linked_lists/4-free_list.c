#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: Head of linked list.
 */
void free_list(list_t *head)
{
	list_t *tlist;

	tlist = head;
	while (head != NULL)
	{
		head = head->next;
		free(tlist->str);
		free(tlist);
		tlist = head;
	}
	free(head);
}
