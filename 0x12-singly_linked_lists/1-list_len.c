#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elemets in a linked list
 * @h: pointer to lists head
 *
 * Return: Number of elements in a list
 */
size_t list_len(const list_t *h)
{

	size_t count = 0;
	list_t *ptr = (list_t *)h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
