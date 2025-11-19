/**
 * free_listint -  frees a listint_t list.
 * @head: pointer to first node
 *
 * Return: nothing
 */

#include <stdlib.h>
#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
