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
	int k, l;
	int **arrp = (int **)malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
		return (NULL);
	if (!arrp)
	{
		free(arrp);
		return (NULL);
	}

	for (k = 0; k < height; k++)
		arrp[k] = (int *)malloc(width * sizeof(int));
	if (!arrp)
	{
		for (l = 0; l < height; l++)
			free(arrp[l]);
		free(arrp);
		return (NULL);
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			arrp[k][l] = 0;
	}

	return (arrp);
}

