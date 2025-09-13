/**
 * _strchr - locates a character in a string.
 * @s - pointer to string.
 * @c - character to locate.
 *
 * Return: pointer to  first occurrence of the character c in the string .
 */

#include "main.h"
#include <stddef.h>

char *_strchr(char *s, char c)
{
	char *p;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = s + i;
			return (p);
		}
		i++;
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

