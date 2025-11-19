/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to first node
 *
 * Return: the number of nodes
 */

#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t total;

	current = h;
	total = 0;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		total++;
		current = current->next;
	}
	return (total);
}
