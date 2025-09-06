/**
 * rev_string -  reverses a string.
 * @s: pointer to a string.
 *
 * Return: nothing.
 */

#include "main.h"

void rev_string(char *s)
{
	int i = 0;
	int j;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);

		 temp = s[j];
		 s[j] = s[i - j - 1];
		 s[i - j - 1] = temp;
	}
	_putchar(10);
}
