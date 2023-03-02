/*
 * File1
 * write
 */

#include "main.h"

/**
 * strcat - concatenates two strings
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int let = 0, dest_num = 0;

	while (dest[let++])
		dest_num++;

	for (let = 0; src[let]; let++)
		dest[dest_num++] = src[let];

	return (dest);
}
