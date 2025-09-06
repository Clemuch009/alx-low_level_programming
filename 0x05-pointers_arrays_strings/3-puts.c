/**
 * _puts - prints a string, followed by a new line.
 * @str: pointer to string.
 *
 * Return: nothing.
 */

#include "main.h"

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);

		str++;
	}
	_putchar(10);
}
