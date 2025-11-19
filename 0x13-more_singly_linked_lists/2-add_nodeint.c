/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to poiter's head
 * @n: value
 *
 * Return:  address of the new element, or NULL if it failed
 */

#include <stdlib.h>
#include <stdddef.h>
#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h_node;

	if (head == NULL)
		return (NULL);

	h_node = malloc(sizeof(listint_t));
	if (h_node == NULL)
		return (NULL);
	h_node->n = n;
	h_node->next = *head;
	*head = h_node;
	return (h_node)
}
