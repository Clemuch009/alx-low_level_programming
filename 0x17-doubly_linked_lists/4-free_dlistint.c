#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t * current = head;
	while(current->next != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
