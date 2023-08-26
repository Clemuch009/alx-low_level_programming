/*
 * File1
 * author
 */

#include "main.h"

/**
 * strcat -Concatenates the string pointer
 * @dest: Apointer
 * @src:pointer
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
