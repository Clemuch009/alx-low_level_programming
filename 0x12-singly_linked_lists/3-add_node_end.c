/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: pointer to heads pointer
 * @str: pointer to a string
 *
 * Return: the address of the new element, or NULL if it failed
 */

#include <stdlib.h>
#include "lists.h"
#include <string.h>

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->len = strlen(str);
	new_node->next = NULL;
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (current == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next  = new_node;
	return (new_node);
}
