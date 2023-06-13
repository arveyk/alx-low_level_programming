#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**alloc_grid - allocates a 2d array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointert to the array
 */
int **alloc_grid(int width, int height)
{

	int **grid = NULL;
	int row = 0;
	int column = 0;
	int g_size = width * height;

	grid = (int **)malloc(sizeof(int ) * g_size);

	if (!grid)
		return (NULL);

	for (;row < height - 2; row++)
	{
		for (;column < width - 2; column++)
		{
			grid[row][column] = 0;
		}
	}
	
	return (grid);
}
