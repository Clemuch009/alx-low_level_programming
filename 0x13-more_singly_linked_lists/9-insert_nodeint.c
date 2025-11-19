/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @idx:  index of the list where the new node should be added.
 * @n: data of the node
 *
 * Return: address of the new node, or NULL if it failed
 */

#include <stdlib.h>
#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *current, *new_node;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	current = *head;
	count = 0;
	while (current != NULL && count < idx -1)
	{
		count++;
		current = current->next;
	
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
