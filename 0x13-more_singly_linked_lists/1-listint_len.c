/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to head
 *
 * Return: number of elements
 */

#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		count ++;
		h = h->next;
	}
	return (count);
}
