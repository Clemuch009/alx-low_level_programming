/*
 * write
 * author
 *
 */

#include "main.h"

/**
 * print_line -print_line
 * @n: character to be checked
 * Return: 0
 */
void print_line(int n)
{

	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
