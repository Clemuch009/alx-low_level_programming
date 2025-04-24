/*
 *
 *
 */

#include <stdio.h>

int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if(alp != 'q' && alp != 'e')
		{
			putchar(alp);
		}
		alp++;
	}

	putchar('\n');

	return(0);
}
