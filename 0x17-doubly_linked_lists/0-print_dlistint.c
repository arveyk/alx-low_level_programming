#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to first node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *trav = (dlistint_t *)h;

	if (trav == NULL)
		return (0);
	while (trav != NULL)
	{
		printf("%d\n", trav->n);
		count++;
		trav = trav->next;
	}

	return (count);
}
