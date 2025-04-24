/*
 *
 */

#include <stdio.h>

void _print_rev_recursion(char *s)
{
	if(*s == '\0')
	{
		return;
	}

	else
	{
		 _print_rev_recursion(char s+1);
		 putchar(*s);
	}
}
