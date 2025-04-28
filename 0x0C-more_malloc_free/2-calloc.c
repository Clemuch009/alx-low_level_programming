#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if(nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	int *arr = malloc(nmemb * size);
	if(arr == NULL)
	{
		return (NULL);
	}

	for(int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
