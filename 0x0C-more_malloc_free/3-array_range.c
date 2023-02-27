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

	int *arr = NULL;
	int r, c;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max + 1));

	if (!arr)
		return (NULL);
	for (r = min, c = 0; r < max; r++, c++)
		arr[c] = r;

	return (arr);

}
