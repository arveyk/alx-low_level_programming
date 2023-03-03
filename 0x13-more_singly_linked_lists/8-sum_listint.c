#include "lists.h"

/**
 * sum_listint - sums the data in a linked list
 * @head: pointer to head
 *
 * Return: sum of the data
 */
int sum_listint(listint_t *head)
{

	int sum = 0, j;
	listint_t *ptr = head;

	if (head == NULL)
		return (0);
	for (j = 0; ptr != NULL; j++)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);

}
