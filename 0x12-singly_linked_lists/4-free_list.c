#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 * @void free_list:free list_t
 * @list_t *head: pointer to head
 * @returns void
 */

void free_list(list_t *head)
{
	 list_t *next_node;
	list_t * current = head;
	while(current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = current = next_node;
	}
}
