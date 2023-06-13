#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees two dimensional array
 * @grid: two dimensional grid
 * @height: height of the grid
 * Description: free the memory of grid
 *
 *Return: nothing
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
