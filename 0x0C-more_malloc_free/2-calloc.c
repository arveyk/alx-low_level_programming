#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(sizeof(int) * size * nmemb);

	if (!arr)
		return (NULL);
	
	return (arr);
}
