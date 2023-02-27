/*
 * write
 * author
 *
 */

#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a:value
 * @b:values
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
