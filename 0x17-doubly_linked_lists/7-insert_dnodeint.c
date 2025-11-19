/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to first node's pointer
 * @idx: position to insert the newnode
 * @n; the value of n
 *
 * Returns: the address of the new node, or NULL if it failed
 */

#include <stdlib.h>
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *current, *new_node;

	if (idx == 0)
		return add_dnodeint(h, n);
	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current = *h;
	count = 0;
	while (current != NULL &&  count < idx - 1)
	{
		count++;
		current = current->next;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (current->next == NULL)
	{
		current->next = new_node;
		new_node->prev = current;
		new_node->next = NULL;
		return (new_node);
	}
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;
	new_node->prev = current;
	return (new_node);
}

