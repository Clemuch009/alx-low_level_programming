#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 *@list_t *add_node_end: adds a new node at the end of a list_t
 *@list_t **head:pointer to head pointer
 * const char *str : character to accept
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode =malloc(sizeof(list_t));
	if(newnode == NULL)
	{
		return (NULL);
	}
	
	if(str != NULL)
	{
		newnode->str = strdup(str);
		if(newnode-> == NULL)
		{
			free(newnode);
			return(NULL);
		}
		newnode->len = strlen(str);
	}

	else
	{
		newnode->str = NULL;
		newnode->len = 0;
	}

	newnode->next = NULL;

	if(*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		list_t *current = *head;
		while(current-> != NULL)
		{
			current = current->next;
		}
		current->next = newnode;
	}
	return (newnode);
}

