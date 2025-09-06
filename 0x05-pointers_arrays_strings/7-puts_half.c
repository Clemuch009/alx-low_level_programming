/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: pointer to astring.
 *
 * Return: nothing.
 */

#include "main.h"

void puts_half(char *str)
{
	int i = 1;
	int n, j;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		n = (i - 1) / 2;
		
		for (j = n; j < i - 1; j++)
		{
			_putchar(str[j]);
		}
		_putchar(10);
	}

	else if ( i % 2 != 0)
	{
		n = (i - 1) / 2;

		for ( j = n + 1; j < i - 1; j++)
		{
			_putchar(str[j]);
		}
		_putchar(10);
	}
}


