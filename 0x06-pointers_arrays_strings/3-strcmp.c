/**
 * _strcmp - compares two strings.
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 *
 * Return: 0 if s1 == s2 1 if s1 > s2 or -1 otherwise.
 */

#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	if (j == i)
		return (0);
	else if (i > j)
		return (1);
	else
		return (-1);
}
