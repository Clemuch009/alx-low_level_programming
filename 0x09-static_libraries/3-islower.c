/*
 * ter
 * auth
 *
 */

#include "main.h"

/**
 * print -checks for lowercase character
 *
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else 
		return (0);
}
