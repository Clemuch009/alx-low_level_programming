#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: double pointer to head
 * @idx: index to insert at
 * @n: data to insert
 *
 * Return: address of new node, or NULL if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	if(idx == 0)
	{
		return (dlistint_t *add_dnodeint(h, n));
	}

	dlistint_t *current = *h;
	while(current != NULL)
	{
		if(count == idx-1)
		{
			if(current->next != NULL)
			{
				dlistint_t newnode = malloc(sizeof(dlistint_t));
				if(newnode == NULL)
					return (0);
				newnode->n = n;
				newnode->next = current->next;
				newnode->prev = current;

				current->next->prev = newnode;
				current->next = newnode;

				return (newnode);
			}
			else
			{
				return (add_dnodeint_end(h, n));
			}
		}

		current = current->next;
		count++;
	}

	return (NULL);
}



