#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid
 * @grid: The 2-dimensional array of integers to be freed
 * @height: The height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
