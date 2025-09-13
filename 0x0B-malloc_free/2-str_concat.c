/**
 * str_concat - concatenates two strings.
 * @s1: pointer to string 1.
 * @s2: pointer to string 2.
 *
 * Return: pointer to the concatenated string.
 */

#include <stdlib.h>
/*#include <stdff.h>*/
#include "main.h"

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	char *str;
	unsigned int j = 0;
	unsigned int a;
	unsigned int count;
	
	/*if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";*/


	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	str = malloc(((i + j) + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
	{
		str[a] = s1[a];
	}
	while (count < j)
	{
		str[i + 1] = s2[count];
		count++;
		i++;
	}
	return (str);
}


