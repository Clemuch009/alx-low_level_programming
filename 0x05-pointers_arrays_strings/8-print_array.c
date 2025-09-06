/**
 * print_array - prints n elements of an array of integers.
 * @a: pointer to an array.
 * @n: number of elements to print.
 *
 * Return: nothing.
 */

#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i <= n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}

		else
		{
			printf("%d\n", a[i]);
		}
	}
}
