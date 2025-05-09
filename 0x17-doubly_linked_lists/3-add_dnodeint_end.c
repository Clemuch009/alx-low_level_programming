#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer value to add to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
{
	dlistint_t * tailnode = malloc(sizeof(dlistint_t));
	if (tailnode == NULL)
		return NULL;

	tailnode->n = n;

	tailnode->next = NULL;
	
	if(*head == NULL)
	{
		tailnode->prev = NULL;
		*head = tailnode;
		return (tailnode);
	}

	dlistint_t * current = *head;
	while(current-> != NULL)
	{
		current = current->next;
	}

	current->next = tailnode;
	tailnode->prev = current;

	return (tailnode);
}


