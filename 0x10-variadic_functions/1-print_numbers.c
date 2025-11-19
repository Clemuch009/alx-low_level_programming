/**
 *  print_numbers - prints numbers, followed by a new line.
 *  @separator: string to be printed between numbers.
 *  @n: number of parameters to be passed.
 *
 *  Return: nothing.
 */

#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n ; i++)
	{
		value = va_arg(arg, int);
		printf("%d", value);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}	
