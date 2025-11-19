/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to first node
 *
 * Return: the number of nodes
 */

#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t total;

	current = h;
	total = 0;
	while (current != NULL)
	{
		total++;
		current = current->next;
	}
	return (total);
}
