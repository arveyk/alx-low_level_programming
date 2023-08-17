#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *insert(dlistint_t **h, dlistint_t *new_dni, unsigned int idx);
/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: pointer to first node's pointer
 * @idx: index of where to insert
 * @n: new node's data
 *
 * Return: address of new node, NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *new_dn;

	new_dn = malloc(sizeof(dlistint_t));
	if (new_dn == NULL)
		return (NULL);
	new_dn->n = n;
	if (*h == NULL)
	{
		if (idx != 0)
			return (NULL);
		new_dn->next = NULL;
		new_dn->prev = NULL;
		*h = new_dn;
		return (new_dn);
	}
	if (idx == 0)
	{
		new_dn->next = (*h)->next;
		new_dn->prev = NULL;
		*h = new_dn;
		return (new_dn);
	}
	new_dn = insert(h, new_dn, idx);
	return (new_dn);
}

/**
 * insert - inserts  a new node if index is not 0
 * @h: pointer to first node's pointer
 * @new_dn: pointer to new node
 * @idx: position to insert new node
 *
 * Return: New node address, NULL on failure
 */
dlistint_t *insert(dlistint_t **h, dlistint_t *new_dn, unsigned int idx)
{
	unsigned int id = 0;
	dlistint_t *trav = NULL;
	dlistint_t *prev;

	trav = *h;
	prev = trav;
	while (trav->next != NULL)
	{
		if (id == idx)
		{
			new_dn->prev = prev;
			new_dn->next = trav;
			prev->next = new_dn;
			trav->prev = new_dn;
			return (new_dn);
		}
		prev = trav;
		trav = trav->next;
		id++;
	}
	return (NULL);
}

