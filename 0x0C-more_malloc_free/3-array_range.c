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

	int *ptr;
	int t, v;
	int range;

	if (min > max)
		return (NULL);
	range = (max - min) + 1;
	ptr = malloc(sizeof(int) * (range));
	if (!ptr)
		return (NULL);

	v = min;
	for (t = 0; t < range; t++, v++)
	{
		ptr[t] = v;
	}
	return (ptr);
}
