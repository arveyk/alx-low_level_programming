#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_dnodeint - adds a node at the beginning of a dlistint_t list
 * @head: pointer to the first node's pointer
 * @n: data for new node
 *
 * Return: address of new element, NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new_dn;

	new_dn = malloc(sizeof(dlistint_t));
	if (new_dn == NULL)
		return (NULL);
	new_dn->n = n;
	new_dn->prev = NULL;
	new_dn->next = NULL;
	if (*head != NULL)
	{
		new_dn->next = (*head);
		(*head)->prev = new_dn;
		*head = new_dn;
	}
	*head = new_dn;
	return (new_dn);
}
