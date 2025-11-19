/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to first node's pointer
 * @n: value of n
 *
 * the address of the new element, or NULL if it failed
 */

#include <stdlib.h>
#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	current = *head;
	*head = new_node;
	new_node->next = current;
	if (current != NULL)
		current->prev = new_node;
	return (new_node);
}
