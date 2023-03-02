/*
 * file2
 * author
 *
 */

#include "main.h"

/**
 * _strncat -concatenates two strings
 * @dest: string
 * @src: string
 * @n: bytes
 *
 * Return:A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int let = 0, dest_num = 0;

	while (dest[let++])
		dest_num++;

	for (let = 0; src[let] && let < n; let++)
		dest[dest_let++] = src[let];

	return (dest);
}
