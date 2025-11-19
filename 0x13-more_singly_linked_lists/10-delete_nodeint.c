/**
 * delete_nodeint_at_index -  deletes the node at index index of a listint_t linked list.
 * @head; pointer to first node's pointer
 * @index: index of list to remove.
 *
 * Return:1 if it succeeded, -1 if it failed
 */

#include <stdlib.h>
#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *remove;
	unsigned int count;

	if (head == NULL || *head == NULL))
		return (-1);
	if (index == 0)
	{
		current = *head;
		*head = (*current)->next;
		free(current);
		return (1);
	}
	current = *head;
	count = 0;
	while (current != NULL && count < index - 1)
	{
		count++;
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
		return (-1);
	remove = current->next;
	current->next = remove->next;
	free(remove);
	return (1);
}
	
