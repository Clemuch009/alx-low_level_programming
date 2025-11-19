/**
 * sum_dlistint - eturns the sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to first node
 *
 * Return sum of all data in list or o if empty
 */

#include <stdlib.h>
#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	current = head;
	sum = 0;
	while (current != 0)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
