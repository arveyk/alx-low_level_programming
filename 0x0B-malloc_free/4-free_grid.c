#include "main.h"
#include "stdlib.h"

/**
 * free_grid - free allocated grid
 * @grid: pointer to 2d array
 * @height: size of pointer to pointer
 * Return: pointer to grid
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
