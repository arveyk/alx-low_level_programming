#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at a give index
 * @head: pointer to the first node
 * @index: position to be checked
 *
 * Return: address of required node, NULL if it fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int id = 0;
	dlistint_t *trav;

	if (head == NULL)
		return (NULL);
	trav = head;
	while (trav != NULL)
	{
		if (id == index)
			return (trav);
		trav = trav->next;
		id += 1;
	}
	return (NULL);
}
