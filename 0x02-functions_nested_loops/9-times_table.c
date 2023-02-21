/*
 * write
 * authot
 *
 */

#include "main.h"

/**
 * print -prints the 9 times table, starting with 0
 *
 * 
 * Return: 0
 */

void times_table(void)
{

	int let, mult, prod;

	for (let = 0; let <= 9; let++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = let * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
