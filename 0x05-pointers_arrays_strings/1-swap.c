/*
 *
 */

#include <stdio.h>

void swap_int(int *a, int *b)
{
	int a_1 = *a;
	*a = *b;
	*b = a_1;
}
