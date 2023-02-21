/*
 * write
 * author
 *
 */

#include "main.h"

/**
 * print -prints the last digit of a number
 *
 * Return
 */

int print_last_digit(int i)
{

	int last_digit = i % 10;

	if (last_digit < 0)
		last_digit; i = -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
