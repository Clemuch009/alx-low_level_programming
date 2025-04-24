/*
 *
 *
 */

#include <stdio.h>

int main()
{
	char l_c ='a';
	char u_c = 'A';

	while(l_c <= 'z')
	{
		putchar(l_c);
		l_c++;
	}

	while(u_c <= 'Z')
	{
		putchar(u_c);
		u_c++;
	}

	putchar('\n');

	return(0);
}
