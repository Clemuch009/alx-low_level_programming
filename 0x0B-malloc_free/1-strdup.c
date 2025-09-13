/**
 *_strdup - returns a pointer to a newly allocated space in memory/
 *  which contains a copy of the string given as a parameter.
 *  @str: pointer to string.
 *
 *  Return: pointer on success or NULL on fail.
 */


#include "main.h"
#include <stddef.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	unsigned int i = 0;
	char *s;
	unsigned int j;

	if (str == NULL)
		return (0);

	while (str[i] != '\0')
	{
		i++;
	}

	s = malloc((i + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	s[j] = '\0';

	return (s);
}

