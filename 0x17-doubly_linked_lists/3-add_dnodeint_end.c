#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a dlistint_t
 * @head: pointer to the first nodes's pointer
 * @n: data for new node
 *
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_end;
	dlistint_t *trav;

	new_end = malloc(sizeof(dlistint_t));
	if (new_end == NULL)
		return (NULL);
	new_end->n = n;
	new_end->next = NULL;
	new_end->prev = NULL;
	if (*head == NULL)
		*head = new_end;
	else
	{
		trav = *head;
		while (trav->next != NULL)
			trav = trav->next;
		new_end->prev = trav;
		trav->next = new_end;
	}
	return (new_end);
}
