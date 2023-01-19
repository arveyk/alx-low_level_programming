#include "function_pointers.h"

/**
 * array_iterator - executes a given function on each array parameter
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to  function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t  size, void (*action)(int))
{

	size_t  y = 0;

	while (y < size)
	{

		action(array[y]);
		y++;
	}

}
