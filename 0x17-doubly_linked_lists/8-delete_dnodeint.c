/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list.
 * @head: pointer to first node's pointer
 * @index: the poistion to delete
 *
 * Return:  1 if it succeeded, -1 if it failed
 */

#include <stdlib.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *remove;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(current);
		return (1);
	}

	count = 0;
	current = *head;
	while (current != NULL && count < index - 1)
	{
		count++;
		current =current->next;
	}
	if (current == NULL || current->next == NULL)
		return (-1);
	remove = current->next;
	current->next = remove->next;
	remove->prev = current;
	free (remove);
	return (1);
}
