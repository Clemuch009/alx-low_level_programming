#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	if(s1 == NULL)
	{
		s1 = "";
	}

	if(s2 == NULL)
	{
		s2 == "";
	}
	int count1 = 0;
	while(s1[count1])
	{
		count1++;
	}

	char *str = malloc(count1 + n + 1);
	if(str == NULL)
	{
		return NULL;
	}

	int count2 = 0;
	while(s2[count2])
	{
		count2++;
	}

	for(i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	if(n > count2)
	{
		n = count2;
	}
	for(int j = 0; j < count2; j++)
	{
		str[i +j] = s2[j];
	}

	str[i] = '\0';
	return (str);
}
