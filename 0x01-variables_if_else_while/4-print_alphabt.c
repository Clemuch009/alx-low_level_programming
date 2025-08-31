/**
 * main - Prints the alphabet in lowercase, except 'q' and 'e'.
 *
 * Return: 0 on success.
 */

#include <stdio.h>

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
			putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
