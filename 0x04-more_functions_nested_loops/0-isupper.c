/**
 * _isupper - Checks for uppercase character.
 * @c: character to check.
 *
 * Return: 1if yes or ) otherwise.
 */

#include "main.h"

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{	
		return (1);
	}
	return (0);
}
