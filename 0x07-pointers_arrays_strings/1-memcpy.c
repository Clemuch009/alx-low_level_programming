/**
 * _memcpy - copies memory area.
 *
 *
 *
 */


#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;

	while (n--)
	{
		*d++ = *src++;
	}
	return (dest);
}
