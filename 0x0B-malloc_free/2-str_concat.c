/*
 *
 *
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int count1 = 0;
	int count2 = 0;
	
	if(s1 == NULL)
	{
		s1 = "";
	}
	
	if (s2 == NULL)
		s2 = "";

	while(s1[count1])
	{
		count1++;
	}

	while(s2[count2])
	{
		count2++;
	}

	int size = count1 + count2;

	char *str = (char *)malloc((size + 1) * sizeof(char));

	if(str == NULL)
	{
		return(NULL);
	}

	int i = 0;
	while(s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	int j = 0;
	while(s2[i])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';

	return (str);
}



