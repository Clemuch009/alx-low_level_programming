/**
 *  pop_listint - deletes the head node of a listint_t linked list,\
 *   and returns the head node’s data (n).
 *   @head: pointer to head's pointer
 *
 *   Return: returns the head node’s data (n) or 0 if empty
 */

#include <stdlib.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (0);
	current = *head;
	n = current->n;
	*head = (*head)->next;
	free(current);
	return (n);
}
