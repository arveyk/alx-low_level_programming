#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * smaller - returns the smaller of 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: the smaller number
 */
size_t smaller(size_t a, size_t b)
{
	if (a > b)
		return (b);
	return (a);
}
/**
 * jump_search - searches for an element using jump search algorithm
 * @array: array to search
 * @size: number of element in the array
 * @value: element to search
 *
 * Return: index of position if found, else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = sqrt(size);

	while ((array[smaller(right, size) - 1]) < value)
	{
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
		left = right;
		right = right + sqrt(size);
		if (left >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", left,  right);
	while (array[left] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
		left += 1;
		if (left == fmin(right, size))
			return (-1);
	}
	if (array[left] == value)
		return (left);
	return (-1);
}
