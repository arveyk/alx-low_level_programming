#include "main.h"

/**
 * swap_int - swaps the values of two int variables
 *
 * Return: void
 * @a: pointer to first variable to be swapped
 * @b: pointer to second variable to be swapped
 */
void swap_int(int *a, int *b)
{

	int y;

	y = *a;
	*a = *b;
	*b = y;
}

