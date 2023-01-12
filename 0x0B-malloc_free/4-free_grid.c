#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the array created by alloc grid
 *
 * Return: No value
 * @grid: pointer to the array to be freed
 * @height:dimension of array(number of rows)
 */
void free_grid(int **grid, int height)
{
	int t;

	for (t = 0; t < height; t++)
		free(grid[t]);
	free(grid);
}
