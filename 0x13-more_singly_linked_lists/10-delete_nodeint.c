#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
* delete_nodeint_at_index - deletes a node at a give index
* @head: address of pointer to first node
* @index: position of node to delete
*
* Return: 1 if successful, -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *trav;
	listint_t *prev;
	unsigned int ch = 0;

	if (*head == NULL)
		return (-1);
	trav = *head;

	if (index == 0)
	{
		trav = (*head)->next;
		free(*head);
		*head = trav;
		return (1);
	}
	while (trav != NULL)
	{
		if (ch == index)
		{
			prev->next = trav->next;
			free(trav);
			return (1);
		}
		prev = trav;
		trav = trav->next;
		ch++;
	}
	return (-1);
}
