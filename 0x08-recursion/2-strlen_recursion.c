/*
 * file2
 * write
 *
 */

#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{

	int num = 0;

	if (*s)
	{
		num++;
		num += _strlen_recursion(s + 1);
	}

	return (num);
}
