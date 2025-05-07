#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 * @list_t *add_node:  adds a new node at the beginning of a list_t
 * @list_t **head : pointer to head pointer
 * @const char *str: string
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	if(newnode == NULL)
	{
		return (NULL);
	}

	if(str != NULL)
	{
		newnode->str = strdup(str);
		if(newnode->str == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->len = strlen(str);
	}
	else
	{
		 newnode->str = NULL;
		 newnode->len = 0;
	}
	newnode->next = *head;
	*head = newnode;

	return (newnode);

}

