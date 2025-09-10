/**
 * main - prints all arguments it receives.
 * @argc: number of arguments passed.
 * @argv: holds arguments.
 *
 * Return: 0.
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
