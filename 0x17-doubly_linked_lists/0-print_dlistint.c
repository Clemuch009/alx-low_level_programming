#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if(h == NULL)
	{
		return;
	}
	
	dlistint_t * current = h;
	while(current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	
	return (count);
}

