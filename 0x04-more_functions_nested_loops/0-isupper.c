/*
 * write
 * author
 *
 */

#include "main.h"

/**
 * _isupper -checks for uppercase character
 *@c: character to be check
 * Return: 0
 */
int _isupper(int c)
{

	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < hash; index++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');
		}
}
