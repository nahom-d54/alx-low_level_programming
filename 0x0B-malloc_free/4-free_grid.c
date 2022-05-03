#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2 dimentional grid
 * @grid: the grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	unsigned int h = 0;

	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}
