/**
 * main - entry of program
 * Return: 0
 */

#include <stdio.h>
__attribute__((constructor))
void before_main(void)
{
	printf(" You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

int main()
{
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}
