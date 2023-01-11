#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2d array.
 *
 * Return: pointer to a 2 d array
 * NULL if dimensions are 0 or negative
 * @width: width of array
 * @height: columns of the array
 */
int **alloc_grid(int width, int height)
{

	int **u;
	int k, l;

	if (width <= 0 || height <= 0)
		return (NULL);

	u = malloc((sizeof(int)) * height);

	for (k = 0; k < height; k++)
		u[k] = malloc(sizeof(int) * width);

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			u[k][l] = 0;
	}

	return (u);
}

