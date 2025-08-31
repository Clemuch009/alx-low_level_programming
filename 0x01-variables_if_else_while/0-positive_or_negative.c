/**
 * main - Assign a random number to the variable n each time it is executed.
 *
 * Return: 0 on success
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d:is positive\n", n);
	else if (n == 0)
		printf("%d:is zero\n", n);
	else
		printf("%d:is neggative\n", n);

	return (0);
}
