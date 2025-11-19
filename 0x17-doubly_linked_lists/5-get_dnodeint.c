/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to first node
 * @index: index to retrieve
 *
 * Return: node on index or NULL on failure
 */

#include <stdlib.h>
#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current;

	current = head;
	count = 0;
	while (current != NULL)
	{
		if (index == count)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
