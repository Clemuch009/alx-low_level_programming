/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: pointer to first node.
 * @index: index of the node to be return
 *
 * Return:  returns the nth node of a listint_t linked list or NULL.
 */

#include <stdlib.h>
#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count;

	current = head;
	count = 0;
	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
