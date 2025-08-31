/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: 0 on success.
 */

#include  <stdio.h>

int main(void)
{
	int i = 97;
	char c = 'A';
	
	while (i < 123)
	{
		putchar(i);

		i++;
	}

	while (c <= 'Z')
	{
		putchar(c);

		c++;
	}
	putchar('\n');

	return (0);
}
