/**
 * print_sign - Prints the sign of a number.
 * @n: integer to check.
 *
 * Return: 1 n if > 0, 1 if  n 0 , -1 for < 0.
 */

#include "main.h"

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
