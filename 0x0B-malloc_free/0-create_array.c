/*
 *
 */

#include <stdio.h>
char *create_array(unsigned int size, char c)
{
	char *str;
	str = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}

	else
	{
		for(int i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}

	return (str);
}

