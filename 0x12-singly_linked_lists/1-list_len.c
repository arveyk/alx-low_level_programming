#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - counts the number of elements in a linked list
 * @h: pointer to head node
 *
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{

	list_t *trav;
	size_t tr = 0;

	if (h == NULL)
		return (0);
	trav = (list_t *)h;
	while (trav)
	{
		tr++;
		trav = trav->next;
	}
	return (tr);
}
