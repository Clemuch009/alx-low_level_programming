/**
 * main - multiplies two numbers.
 * @argc: number of argument to main.
 * @argv: hold arguments
 *
 * Return:0.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) *  atoi(argv[2]));
	return (0);
}


