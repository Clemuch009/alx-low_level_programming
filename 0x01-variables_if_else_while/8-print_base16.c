/**
 * main - Prints all possible combinations of single-digit numbers.
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
		putchar(',');
		putchar(' ');

		i++;
	}

	putchar('\n');

	return (0);
}
