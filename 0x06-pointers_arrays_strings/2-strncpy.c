/*
 * file3
 * author
 *
 */

#include "main.h"

/**
 * _strncpy -copies a string
 * @dest: string
 * @src: string
 * @n: bytes
 *
 *Return:A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{

	int let = 0, src_num = 0;

	while(src[let++]);
		src_num++;

	for (let = 0; src[let] && let < n; let++)
		dest[let] = src[let];

	for (let = src_num; let  < n; let++)
		dest[let] = '\0';

	return (dest);
}

