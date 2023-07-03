#include "lists.h"
#include <stddef.h>

/**
 * sum_listint - sums the data of all the data
 * @head: pointer to node
 *
 * Return: sum of the data
 */
int sum_listint(listint_t *head)
{

	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
