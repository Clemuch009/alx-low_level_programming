/**
 *  free_list -  frees a list_t list.
 *  @head: pointer to pointer to head's pointer
 *
 *  Return: nothing
 */

#include<stdlib.h>
#include "lists.h"

void free_list(list_t *head)
{
	list_t *current;
	
	if (head == NULL)
		return;
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
