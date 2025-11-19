/**
 *  free_dlistint -  frees a dlistint_t list.
 *  @head: pointer to first node
 *
 *  Return: nothing
 */

#include <stdlib.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
