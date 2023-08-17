#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index -deletes a node at a given index
 * @head: pointer to the first node's pointer
 * @index: position of node to delete
 *
 * Return: 1 if successfull, -1 if fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *trav;
	dlistint_t *prev;
	dlistint_t *nxt;
	unsigned int travel = 0;

	if (*head == NULL)
		return (-1);
	trav = *head;
	prev = *head;

	if (index == 0)
	{
		trav = trav->next;
		free(*head);
		*head = trav;
		return (1);
	}
	while (trav != NULL)
	{
		if (travel == index)
		{
			prev->next = nxt;
			if (nxt != NULL)
				nxt->prev = prev;
			free(trav);
			return (1);
		}
		travel++;
		prev = trav;
		trav = trav->next;
		nxt = trav->next;
	}
	return (-1);
}
