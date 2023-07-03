#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - printd the all elements of a linked list
 * @h: pointer to head node
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{

	size_t count;
	listint_t *trav;

	if (h == NULL)
		return (0);
	trav = (listint_t *)h;
	count = 0;
	while (trav != NULL)
	{

		printf("%d\n", trav->n);
		trav = trav->next;
		count++;
	}
	return (count);
}
