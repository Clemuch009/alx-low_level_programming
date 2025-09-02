/**
 * print_alphabet_x10 - Prints 10 times the alphabet.
 *
 * Return: nothing.
 */

#include "main.h"

void print_alphabet_x10(void)
{
	int a = 1;
	
	while (a <= 10)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);

			i++;
		}

		a++;
		_putchar('\n');
	}
}
