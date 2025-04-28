/*
 *
 *
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	if(width == 0 || height == 0)
	{
		return (NULL);
	}
	int **arr = malloc(height * sizeof(int *));
	
	if(arr == NULL)
	{
		return (NULL);
	}

	for(int a = 0; a < height; a++)
	{

		arr[a] = (int *)malloc(width * sizeof(int));
		{
			if (arr[a] == NULL)
			{
				for (int k = 0; k < a; k++)
					free(arr[k]);
				free(arr);
				return NULL;
			}
		for(int i = 0; i < width; i++)
		{
			arr[a][i] = 0;
		}
	}

	return (arr);
	}
}
