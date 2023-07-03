#include "lists.h"
#include <stddef.h>

/**
 * listint_len - counts the number of element in a linked list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	listint_t *trav;
	size_t count = 0;

	if (h == NULL)
		return (0);
	trav = (listint_t *)h;
	while (trav != NULL)
	{

		trav = trav->next;
		count++;
	}

	return (count);
}
