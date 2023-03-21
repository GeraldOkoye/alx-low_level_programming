#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d array grid
 *
 * @height: height or row
 * @grid: 2d array grid
 *
 * Return: 2d array or NULL if failed to allocate memory
 */
void free_grid(int **grid, int height)
{
	int i;

	/**
	 * iterate each element in grid
	 * free the memory of row
	 * free the memory of column
	 */
	for (i = 0; i < height; i++)
		free(grid[i]); /* column and rows */
	/* free entire grid */
	free(grid);
}
