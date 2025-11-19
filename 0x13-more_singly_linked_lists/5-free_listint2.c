/**
 * free_listint2 - sets the head to NULL
 * @head:pointer to head's pointer
 *
 * Return: nothing
 */

#include <stdlib.h>
#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while(*head != NULL)
	{
		current = *head;
		*head = *head->next;
		free(current);
	}
	*head = NULL;
}


