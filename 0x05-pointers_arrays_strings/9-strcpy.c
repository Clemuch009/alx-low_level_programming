/**
 * _strcpy -  copies the string pointed to by src\
 * to the buffer pointed to by dest.
 * @dest: pointer to destination.
 * @src: pionter to the source.
 *
 *Return: pointer to the destination.
 */

#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;

	}
	dest[i] = '\0';

	return (dest);
}
