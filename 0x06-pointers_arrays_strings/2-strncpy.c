/**
 * _strncpy -  copies a string.
 * @dest: pointer to destination .
 * @src: pointer to source.
 * @n: nuber of bytes to be copied.
 *
 * Return: pointer to destination.
 */

#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

