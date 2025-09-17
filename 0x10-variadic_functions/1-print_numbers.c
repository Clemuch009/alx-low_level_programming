/**
 * print_number - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n:  number of integers passed to the function.
 *
 * Return: nothing.
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;
	va_list now;
	unsigned int j = 0;

	va_start(now, n);

	if (separator == NULL)
		separator= "";

	for (i = 0; i < n; i++)
	{
		value = va_arg(now, int);
		_putchar(value);

		while (separator[j] != '\0')
		{
			_putchar(separator[j]);
			j++;
		}
	}
}	
