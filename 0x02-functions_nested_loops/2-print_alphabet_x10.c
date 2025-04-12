/*
 *
 *
 */

#include <stdio.h>

void print_alphabet_x10(void)
{
	char let = 'a';
	int num = 0;

	while (num <= 10)
	{
		while (let <= 'z')
		{
			_putchar(let);

			let++;
		}

		num++;
	}
}
