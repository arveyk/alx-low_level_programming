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

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);

	for (; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
			row -= 1;
			while (row > 0)
			{
				free(grid[row]);
				row -= 1;
			}
			free(grid);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
		{
			*(*(grid + row) + column) = 0;
		}
	}
	return (grid);
}
