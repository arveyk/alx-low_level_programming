#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{

	size_t count = 0;
	dlistint_t *ptr1 = (dlistint_t *)h;

	if (h == NULL)
		return (0);

	while (ptr1 != NULL)
	{
	
		printf("%i\n", ptr1->n);
		count++;
		ptr1 = ptr1->next;
	}

	return (count);
}
