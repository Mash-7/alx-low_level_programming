#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: Head of linked list.
 */
void free_list(list_t *head)
{
	list_t *tlist;

	while (head != NULL)
	{
		tlist = head->next;
		free(tlist->str);
		free(tlist);
		head = tlist;
	}
}
