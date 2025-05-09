#include "list.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer value to add to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t * newnode = malloc(sizeof(dlistint_t));
	if(newnode == NULL)
		return (NULL);

	newnode->n = n;

	newnode->next = *head;
	newnode->previous = NULL;
	
	if(*head != NULL)
		(*head)->prev = newnode;

	*head = newnode;
	return (newnode);
}
