/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to a string where to search.
 * @accept: pointer to a string to search for.
 *
 * Return:the first occurence of "accept" in "s".
 */

#include "main.h"
#include <stdio.h>
#include <string.h>

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
	}
	return (NULL);
}


