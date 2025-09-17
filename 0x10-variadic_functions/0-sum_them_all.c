/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: fixed parameter.
 *
 * Return: sum of all the parameters.
 */

#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int value;
	unsigned int i;
	va_list now;

	va_start(now, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(now, int);
		sum += value;
	}
	va_end(now);
	return (sum);
}



