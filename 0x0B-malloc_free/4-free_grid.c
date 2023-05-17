#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - frees allocted memory of a grid
 * @grid: the grid to be used
 * @height: height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
