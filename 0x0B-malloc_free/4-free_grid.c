/**
 * free_grid - Frees a 2D grid created by alloc_grid
 * @grid: The 2D grid (array of pointers) to free
 * @height: The number of rows (height of the grid)
 */
void free_grid(int **grid, int height)
{
    if (grid == NULL)
        return;

    for (int i = 0; i < height; i++)
    {
        free(grid[i])
    }
    free(grid);
}

