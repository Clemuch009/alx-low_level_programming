/**
 * string_nconcat -  concatenates two strings.
 * @s1: pointer to string 1.
 * @s2:pointer to string 2.
 * @n:
 *
 * Return: pointer to both concatenated strings.
 */

#include <stdlib.h>
#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count = 0;
	unsigned int j = 0;
	unsigned int i;
	char *str;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while(s1[count] != '\0')
		count++;

	while (s2[j] != '\0')
		j++;

	if (n <= j)
		j = n;

	str = malloc(((count + j) + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		str[i] = s1[i];
	
	for (i = 0; i < j; i++)
		str[count + i] = s2[i];
	
	str[count + j] = '\0';
	
	return (str);
}


	
