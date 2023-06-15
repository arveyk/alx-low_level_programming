#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates ans array of integers
 * @min: starting point
 * @max: stoping point
 *
 * Return: Pointer to the allocated memory
 */
int *array_range(int min, int max)
{

	int *ptr = NULL;
	int t;
/*	int range; */

	if (min > max)
		return (NULL);
/*	range = (max - min) + 1; */
	ptr = malloc(sizeof(int) * max);
	if (!ptr)
		return (NULL);

	t = min;
	while (t <= max)
	{
		ptr[t] = t;
	}
	return (ptr);
}
