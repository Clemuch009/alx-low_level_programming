/*
 * write
 * author
 *
 */

#include "main.h"

/**
 * _isdigit -checks for a digit (0 through 9
 * @c:checks for a digit
 *
 * Return: 0
 */
int _isdigit(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
