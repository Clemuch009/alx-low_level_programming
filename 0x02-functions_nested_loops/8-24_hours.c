/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,from 00:00 to 23:59.
 *
 * Return: nothing
 */

#include "main.h"

void jack_bauer(void)
{
	int i = 0;

	while (i < 25)
	{
		int j = 0;

		while (j <= 60)
		{
			_putchar(j);
			_putchar('\n');

			j++;
		}

		i++;
	}
}
