/*
 *
 *
 */

#include <stdio.h>

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit <= 0)
	{
		last_digit = -last_digit;
	}

	else
	{
		return (last_digit);
	}
}

