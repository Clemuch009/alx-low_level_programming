/**
 * print_most_numbers - Prints the numbers, from 0 to 9.
 *
 * Return: nothing.
 */

#include "main.h"

void print_most_numbers(void)
{
	char i = '0';

	while ( i <= '9')
	{
		if ( i != '2' && i != '4')
			_putchar(i);
		i++;
	}

	_putchar('\n');
}
