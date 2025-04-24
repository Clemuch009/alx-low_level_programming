/*
 *  author: Muchai
 *  prints the alphabet in lowercase, followed by a new line
 */

#include <stdio.h>

int main()
{
	char alp = 'a'

	while (alp <= 'z')
	{
		putchar(alp);

		alp++
	}
	putchar('\n');

	return(0);
}
