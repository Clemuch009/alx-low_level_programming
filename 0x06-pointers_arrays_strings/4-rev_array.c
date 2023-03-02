/*
 * file4
 * author
 *
 */

#include "main.h"

/**
 * reverse_array - reverses the content of an array of integer
 * @a: content
 * @n:  content
 *
 */
void reverse_array(int *a, int n)
{

	int let, num;

	for (num = n - 1; num >= n / 2; num--)
	{
		let = a[n - 1 - num];
		a[n - 1 - num] = a[num];
		a[num] = let;
	}
}
