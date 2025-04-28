#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: int
 */

int *array_range(int min, int max)
{
	int i, j;
	if(min > max)
	{
		return (NULL);
	}

	int size = (max - min) + 1;
	int *arr = malloc(size * sizeof(int));
	if(arr == NULL)
	{
		return (NULL);
	}
	
	for(i = 0, j = min; i <= max; i++, j++)
	{
		arr[i] = j;
	}
	return (arr);
}
