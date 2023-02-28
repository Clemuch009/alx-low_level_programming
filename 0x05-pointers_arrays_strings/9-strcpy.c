/*
 * write
 * author
 *
 */

#include "main.h"

/**
 * _strcpy -copies the string pointed to by src
 *   including the terminating null byte (\0)
 *   to the buffer pointedo by dest
 * @dest:pointer
 * @src:pointer
 *
 * Return:0
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}


