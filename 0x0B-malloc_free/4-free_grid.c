#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer to a grid
 * @height: height of a grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (!grid)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
