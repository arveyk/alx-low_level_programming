#include "function_pointers.h"

/**
 * int_index - searches for an index
 * @array: collection of number where to search
 * @size: size of the array
 * @cmp: pointer to compare function
 *
 * Return: -1 if no element matches or size <= 0, else the index of
 * first element for which cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	int r;
	int d;

	if (size <= 0)
		return (-1);
	r = 0;
	while (r < size)
	{
		d = cmp(array[r]);
		if (d != 0)
			return (r);
		r++;
	}
	return (-1);
}
