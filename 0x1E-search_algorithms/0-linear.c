#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * linear_search - function to search a value in an array
 * @array: the array to be traversed, contains the value to be found
 * @size: size of the array
 * @value: value of the array
 *
 * Return: index of the first location where value is found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t arr_size = 0;

	if (array == NULL)
		return (-1);
	while (arr_size < size)
	{
		printf("Value checked array[%ld] = [%d]\n", arr_size, array[arr_size]);
		if ((array[arr_size]) == value)
			return (arr_size);
		arr_size++;
	}
	return (-1);
}
