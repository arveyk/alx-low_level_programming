#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the fist node pointer
 * @n: data for new node
 *
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_h;

	new_h = malloc(sizeof(listint_t));
	if (new_h == NULL)
		return (NULL);
	new_h->n = n;
	new_h->next = *head;
	*head = new_h;

	return (*head);
}
