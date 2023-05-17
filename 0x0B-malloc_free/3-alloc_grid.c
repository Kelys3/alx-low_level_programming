#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of
 * integers
 * @height: height
 * @width: width
 * Return: pointer to the created array.
 * Otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			free(grid);
			for (j = 0; j <= i; j++)
				free(grid[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
