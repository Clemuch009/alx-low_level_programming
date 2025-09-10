/**
 * main - prints its name, followed by a new line.
 * @argc: number of argument passed.
 * @argv: holding the arguments.
 *
 * Return: 0.
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
