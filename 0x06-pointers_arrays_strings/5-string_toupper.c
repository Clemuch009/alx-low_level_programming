/*
 * file5
 * author
 *
 */

#include "main.h"

/**
 * string_toupper -changes all lowercase letters
 *  of a string to uppercase
 * @s: string
 *  Return:A pointer to the changed string.
 */
char *string_toupper(char *s)
{

	int index = 0;

	while (s[index])
	{
		if (s[index] >= 'a' && s[index] <= 'z')
			s[index] -= 32;

		index++;
	}

	return (s);
}

