#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter
 * @array: address of array to be iterated over
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: None
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t r;

	if (array == NULL || action == NULL)
		return;

	r = 0;
	while (r < size)
	{

		action(array[r]);
		r++;
	}
}
