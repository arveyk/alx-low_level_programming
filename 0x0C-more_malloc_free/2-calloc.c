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

	size_t p;
	void *arr = NULL;
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(sizeof(void *) * size * nmemb);

	ptr = (char *)arr;
	for (p = 0; p < (nmemb * size); p++)
		ptr[0] = '0';
	if (!arr || !ptr)
		return (NULL);

	return (arr);
}
