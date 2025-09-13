/**
 * print_numbers - Prints the numbers, from 0 to 9.
 *
 * Return: nothing.
 */

#include "main.h"

void print_numbers(void)
{
	char i = '0';

	while ( i <= '9')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}


