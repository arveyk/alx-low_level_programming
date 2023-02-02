#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node at the beginning of a listint_t list
 * @head: pointer to pointer to head
 * @n: new data
 *
 * Return: Address of new element, or NULL if failed to create
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_g = malloc(sizeof(listint_t));

	if (new_g == NULL)
		return (NULL);

	else
	{

		new_g->n = n;
		new_g->next = *head;

	}
	*head = new_g;

	return (*head);
}
