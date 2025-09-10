/**
 * main - prints the number of arguments passed into it.
 * @argc: number of argument.
 * @argv: holds the argumnts.
 *
 * Return:0.
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
