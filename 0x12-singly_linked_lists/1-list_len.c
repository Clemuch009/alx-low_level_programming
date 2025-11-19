/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to head of list
 *
 * Return : returns the number of elements in a linked list_t list.
 */

#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

size_t list_len(const list_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		count ++;
		h = h->next;
	}
	return (count);
}
