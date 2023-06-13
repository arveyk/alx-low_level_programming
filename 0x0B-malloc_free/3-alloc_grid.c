#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2d array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointert to the array
 */
int **alloc_grid(int width, int height)
{

	int **grid;
	int row = 0;
	int column = 0;
	int p;

	grid = (int **)malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);

	for (; row < height; row++)
	{

		grid[row] = malloc(sizeof(int) * width);
	}

	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
		{
			*(*(grid + row) + column) = 0;
		}
	}

	for (row = 0; row < height; row++)	
	{
		if (grid[row] == NULL)
		{
			for (p = 0; p < height; p++)
				free(grid[row]);
			free(grid);
			return (NULL);
		}
	}


	return (grid);
}
