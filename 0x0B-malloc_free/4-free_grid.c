#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - free a 2D array
 * @grid: pointer to the array
 * @height: the number of rows of the grid
 *
 * Return: None
 */
void free_grid(int **grid, int height)
{

	int r;

	for (r = 0; r < height; r++)
	{
		free(grid[r]);
	}
	free(grid);
}
