/**
 *print_last_digit - Prints the last digit of a number.
 *@a: the argument to the function
 *
 * Return: the last digit of a number
 */

#include "main.h"

int print_last_digit(int a)
{
	int last;

	last = a % 10;
	if (last < 0)
		last = -last;

	_putchar(last + '0');
	return (last);
}
	

