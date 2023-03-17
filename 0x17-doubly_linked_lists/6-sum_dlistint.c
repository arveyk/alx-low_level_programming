#include "lists.h"
#include <stddef.h>

/**
 * sum_dlistint - sums the data of the linked list
 * @head: pointer to first node
 *
 * Return: the sum of ns
 */
int sum_dlistint(dlistint_t *head)
{

	dlistint_t *psn = head;
	size_t count = 0;

	if (head == NULL)
		return (0);
	while (psn != NULL)
	{
		count += psn->n;
		psn = psn->next;
	}
	return (count);
}
