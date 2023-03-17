#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node to the end of a dlistint_t list
 * @head: pointer to head pointer
 * @n: data for new node
 *
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_end = NULL;
	dlistint_t *temp = *(head);

	new_end = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_end)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;
	if (*head == NULL)
	{
		*head = new_end;
		new_end->prev = NULL;
		return (new_end);
	}

	while (temp->next != NULL)
		temp = temp->next;


	temp->next = new_end;
	new_end->prev = temp;


	return (new_end);
}
