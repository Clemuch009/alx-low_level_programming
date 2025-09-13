/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to memory to fill in.
 * @b: bytes to fill in.
 * @n: number of bytes to fill in a memory.
 *
 * Return: pointer to memory filled.
 */

#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}


