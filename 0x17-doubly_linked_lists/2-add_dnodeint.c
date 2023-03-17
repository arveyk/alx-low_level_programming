#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint - adds new node at the beginning of a dlistint_t list
 * @head: pointer to pointer to head node
 * @n: data for new node
 *
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new = NULL;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
