/*
 *
 *
 */

#include <stdio.h>

char *string_toupper(char *)
{
	int i;
	char s;
	while(s[i] != '\0')
	{
		if(i >= 'A' || i <= 'z')
		{
			s[i] = s[i] + 32;
		}
		i++;
	}
	return (s);
}
