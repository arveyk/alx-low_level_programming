#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - countst the number of elemets in a linked list
 * @h: pointer to head node
 *
 * Return: number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{

	size_t count = 0;
	dlistint_t *ptr = (dlistint_t *)h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
