/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: nothing
 */

#include "main.h"
#include <stdio.h>

void print_alphabet(void)
{
	char i = 'a';
	
	while (i <= 'z')
	{
		_putchar(i);

		i++;
	}

	_putchar('\n');

}
