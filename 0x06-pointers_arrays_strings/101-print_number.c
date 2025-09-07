/**
 * print_number -  prints an integer.
 * @n: integer to print.
 *
 * Return: nothing.
 */

#include "main.h"

void print_number(int n)
{
	char s = n;

	while (s >= '0' && s <= '9')
	{
		_putchar(s);
		s++;
		
	}
}

