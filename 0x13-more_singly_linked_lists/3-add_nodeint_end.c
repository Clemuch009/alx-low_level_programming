/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: pointer to head's pointer
 * @n: data
 *
 * Return: address of the new element, or NULL if it failed
 */

#include <stdlib.h>
#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t * tail_node;
	listint_t *current;

	if (head == NULL)
		return (NULL);
	tail_node = malloc(sizeof(listint_t));
	if (tail_node == NULL)
		return (NULL);
	tail_node->n = n;
	tail_node->next = NULL;
	current = *head;
	if (*head == NULL)
	{
		*head = tail_node;
		return (tail_node);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = tail_node;
	return (tail_node);
}
