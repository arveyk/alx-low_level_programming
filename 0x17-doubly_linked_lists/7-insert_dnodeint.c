#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts node at a given index
 * @h: pointer to head node address
 * @idx: position for new node to be inserted
 * @n: data for new node
 *
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *ptr = (*h), *ptr1 = (*h);
	dlistint_t *ptr2 = (*h);
	dlistint_t *new;
	size_t check = 0, check1 = 0, len = 0;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		len++;
	}
	if (idx == 0)
		return (new = (add_dnodeint(h, n)));
	if (idx > len)
		return (NULL);
	if (idx == len)
		return (new = (add_dnodeint_end(h, n)));
	while (check < idx - 1)
	{
		ptr1 = ptr1->next;
		check++;
	}
	while (check1 < idx)
	{
		ptr2 = ptr2->next;
		check1++;
	}
	new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = ptr1;
	new->next = ptr1->next;

	ptr1->next = new;
	ptr2->prev = new;

	return (new);
}
