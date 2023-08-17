#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len -computes the number of nodes in a linked list
 * @h: pointer to the head node
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{

	size_t count = 0;
	dlistint_t *trav = NULL;

	if (h == NULL)
		return (0);
	trav = (dlistint_t *)h;
	while (trav != NULL)
	{
		count++;
		trav = trav->next;
	}
	return (count);
}
