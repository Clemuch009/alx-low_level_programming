/**
 * _islower - Checks for lowercase character.
 * @c:  character to check.
 *
 * Return: 0 on success.
 */

#include "main.h"

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}

