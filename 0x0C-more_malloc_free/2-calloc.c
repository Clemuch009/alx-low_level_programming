/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb:- number of elements to be allocated memory.
 * @size: size of bytes.
 *
 * Retrun : nothing.
 */

#include <stdlib.h>
#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total, i;
	char *arr;

	if ( nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);
	total = size * nmemb;
	(void)total;

	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}

	return (arr);
}
