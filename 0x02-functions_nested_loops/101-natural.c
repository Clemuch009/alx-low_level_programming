/**
 * main - Computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 *Return: 0
 */

#include <stdio.h>

int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 && i % 5 == 0)
			sum = sum + i;

		i++;
	}

	printf("%d\n", sum);
	return (0);
}
