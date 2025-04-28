/*
 *
 *
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	char *strc;
	int count = 0;

	if(str == NULL)
	{
		return (NULL);
	}
	while(str[count])
	{
		count++;
	}

	strc = (char *)malloc(count * sizeof(char));

	if(strc == NULL)
	{
		return (NULL);
	}

	for(int i = 0; i < count; i++)
	{
		strc[i] = str[i];
	}

	strc[count] = '\0';

	return (strc);
}
	
