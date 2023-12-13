#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - searches a value using interplation algorithm
 * @array: array to be searched
 * @size: the number of elements in the array
 * @value: the element to search for
 *
 * Return: index where the element's at, -1 if absent
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;
	size_t eqs;
	int index;
	double diff;

	if (array == NULL)
		return (-1);

	while ((array[high] != array[low]) && (value >= array[low]))
	{
		if (value > array[high])
			return (-1);
		diff = (double)(high - low);
		eqs = (value - array[low]) * diff / (array[high] - array[low]);
		pos = low + eqs;
		if (pos > high)
		{
			printf("Value checked array[%ld] is out of range", pos);
			return (-1);
		}
		if (array[pos] < value)
			low = pos += 1;
		else if (value < array[pos])
			high = pos -= 1;
		else
			return (pos);
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
	}
	index = low;
	if (array[index] == value)
		return (index);
	return (-1);
}
