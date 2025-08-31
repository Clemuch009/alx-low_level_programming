/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: 0 on success.
 */

#include <stdio.h>

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);

		i--;
	}

	putchar('\n');

	return (0);
}
