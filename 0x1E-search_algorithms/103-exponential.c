#include <stdio.h>
#include <stddef.h>

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
 * bin_search - searches a value in a sorted array using binary search
 * method
 * @arr: array suspected to contain the search value
 * @high: higher sarch bound
 * @low: low search bound
 * @value: the value to be searched
 *
 * Return: position where the value is found, -1 if not found
 */
int bin_search(int *arr, size_t low, size_t high, int value)
{
	int mid;

	if (high >= low)
	{
		mid = low  + (high - low) / 2;
		if (arr[mid] == value)
			return (mid);
		if (arr[mid] > value)
			return (bin_search(arr, low, mid - 1, value));
		return (bin_search(arr, mid + 1, high, value));
	}
	return (-1);
}

/**
 * exponential_search - searches for an element using exponential search algo
 * @array: array to be searched
 * @size: number of element in the array
 * @value: element being sought
 *
 * Return: index where element's at, -1 if not found or array == NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	int bound = 1;
	int len = size;
	int min;
	int search;

	if (array == NULL)
		return (-1);

	while (bound < len && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%d] and [%d]\n", bound / 2,  min);
	search = bound / 2;
	printf("Searching in array: ");
	min = smaller(bound, len - 1);
	while (search++ < min)
	{
		printf("%d", array[search]);
		if (search < min)
			printf(", ");
	}
	printf("\n");
	return (bin_search(array, (bound / 2), min, value));
}
