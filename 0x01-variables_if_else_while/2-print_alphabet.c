/**
 * main - Prints alphabets in small letter.
 *
 * Return: 0 on success.
 */

#include <stdio.h>

void main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}

	putchar('\n');
}
