/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to int
 * @b: pointer to int
 *
 * Return: nothing
 */

#include "main.h"

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
