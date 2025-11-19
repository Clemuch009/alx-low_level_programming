/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of int passed.
 *
 * Return:sum of all the components.
 *
 */

#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list now;
	unsigned int i;
	int value;
	int sum = 0;
	
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		value = va_arg(now, int);
		sum += value;
	}
	return (sum);
}
