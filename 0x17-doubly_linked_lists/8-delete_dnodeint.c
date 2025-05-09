#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a dlistint_t list
 * @head: Double pointer to the head of the doubly linked list
 * @index: Index of the node to delete (starting from 0)
 *
 * Return: 1 if deletion succeeded, -1 if it failed (e.g., index is out of range)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t * current;
	dlistint_t * previous ;
	dlistint_t * now = *head

	if(idx == 0)
	{
		*head = now->next;
		now->next->prev = NULL;
		free(now);
	}

	while(now != NULL)
	{
		if (count == idx)
		{
			if(now->next != NULL)
			{
				previous = now->prev;
				current = now->next;
				previous->next = current;
				current->prev = previous;
				free(now);
				return (1)
			}
			
			else
			{
				previous = now->prev;
				current->next = NULL;
				free(now);
				return (1);
			}
			
			now = now->next;
			count++;
		}
		
		return (-1);
	}
}

