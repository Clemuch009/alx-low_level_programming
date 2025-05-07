#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 * @size_t list_len:  returns the number of elements
 * @const list_t *h
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	while(h != NULL)
	{
		count++;
		h = h->;
	}

	return (count);
}
