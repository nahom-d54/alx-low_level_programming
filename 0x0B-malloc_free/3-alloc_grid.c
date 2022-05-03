#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates grid
 * @width: width of the array
 * @height: height of the array
 *
 * Return: rturns grid pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w;
	int h = 0;

	if (width < 1 || height < 1)
	{
		return (0);
	}

	grid = malloc(sizeof(int *) * height);
	if (grid == 0)
	{
		free(grid);
		return (0);
	}

	while (h < height)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == 0)
		{
			while (h > 0)
			{
				free(grid[h]);
				h--;
			}
			free(grid);
			return (0);
		}
		w = 0;
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
		h++;
	}
	return (grid);
}
