#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: pointer to array to be searched
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: index for first element for which cmp does not return 0
 * -1 if no element matches
 * -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	int l;

	if (size <= 0)
		return (-1);
	for (l = 0; l < size; l++)
	{
		(*cmp)(array[l]);
		if (cmp)
			break;
	}
			return (l);

}
