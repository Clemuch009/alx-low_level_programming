/**
 * alloc_grid
 *
 *
 *
 */

#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0 )
		return (NULL);
	int i, j;
	int *arr;

	arr = malloc((width * height) * sizeof(int));

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{


