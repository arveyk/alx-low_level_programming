#include <stdio.h>
#include <stddef.h>
/**
 * binary_search - searches a value in a sorted array using binary search
 * method
 * @array: array suspected to contain the search value
 * @size: number of elements in the array
 * @value: the value to be searched
 *
 * Return: position where the value is found, -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left_p = 0;
	size_t right_p  = size - 1;
	size_t trav;
	size_t mid;
	int limit = size / 2;

	if (array == NULL)
		return (-1);
	while (limit-- > 0)
	{
		if (left_p >= right_p)
			break;
		printf("Searching in array: ");
		for (trav = left_p; trav <= right_p; trav++)
		{
			printf("%d", array[trav]);
			if (trav < right_p)
				printf(", ");
		}
		printf("\n");
		mid = (right_p + left_p);
		if ((mid % 2) == 0)
			mid = (mid / 2);
		else
			mid = (mid - 1) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right_p = mid - 1;
		else
			left_p = mid + 1;
	}
	return (-1);
}
