#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum in the range
 * @max: extreme end maximum
 *
 * Return: pointer to array.
 */
int *array_range(int min, int max)
{

	int *arr;
	int r;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max + 1));

	if (!arr)
		return (NULL);
	for (r = 0; r <= max; r++)
		arr[r] = r;

	return (arr);

}
