/*
 * file
 * write
 *
 */

#include "main.h"

/**
 * _memset -fills memory with a constant byte
 * @s:pointer
 * @b:pointer
 * @n:bytes
 *
 *  Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}

