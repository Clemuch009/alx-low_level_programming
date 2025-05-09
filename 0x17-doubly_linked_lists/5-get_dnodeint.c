#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return (starting from 0)
 *
 * Return: pointer to the node at index, or NULL if index is out of range
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	while(head != NULL)
	{
		if(index == count)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}

	
