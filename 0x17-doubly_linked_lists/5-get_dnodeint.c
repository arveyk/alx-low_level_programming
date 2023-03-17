#include "lists.h"

/**
 * get_dnodeint_at_index - retrieves a node at a given index
 * @head: pointer to first node.
 * @index: index of the node to be returned
 *
 * Return: the node at index idx
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *psn = head;
	dlistint_t *check = head;
	size_t count = 0, count2 = 0;

	while (check->next)
	{

		count2++;
		check = check->next;
	}

	if (index > count2)
		return (NULL);

	while (count < index)
	{
		psn = psn->next;
		count++;
	}

	return (psn);
}
