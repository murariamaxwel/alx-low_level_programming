#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees a grid (the grid is 2d)
 * the grid previously created by your alloc_grid function
 * @grid: pointer the 2d array
 * @height: reprsents the height of array
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
