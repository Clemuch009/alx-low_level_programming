/**
 * sum_listint -  returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to first node
 *
 * Return:  returns the sum of all the data (n) of a listint_t linked list or 0 if empty
 */

#include <stdlib.h>
#include "lists.h"

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	if (head == NULL)
		return (0);
	current = head;
	sum = 0;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
