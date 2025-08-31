/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: 0 on success.
 */

#include <stdio.h>

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);

		i++;
	}

	putchar(10);

	return (0);
}
