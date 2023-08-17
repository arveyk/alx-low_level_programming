#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - sums the data of a dlistint_t list
 * @head: pointer to fist node
 *
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *trav;

	if (head == NULL)
		return (0);
	trav = head;
	while (trav != NULL)
	{
		sum += trav->n;
		trav = trav->next;
	}
	return (sum);
}
