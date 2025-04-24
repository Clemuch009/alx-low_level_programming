/*
 *
 */

#include <stdio.h>

char *_memset(char *s, char b, unsigned int n)
{
	int j;
	for(j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
