/*
 * file5
 * author
 *
 */

#include "main.h"
#include <stdlib.h>

/**
 * free_grid -frees a 2 dimensional grid previously created
 *  by your alloc_grid function.
 *  @grid:grid
 *  @height:height
 *
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
