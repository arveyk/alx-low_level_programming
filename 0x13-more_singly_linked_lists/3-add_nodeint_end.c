#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds node at end of list
 * @head: pointer to pointer to head
 * @n: fresh data
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_g = (listint_t *)malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (new_g == NULL)
		return (NULL);

	new_g->n = n;
	new_g->next = NULL;

	if (*head == NULL)
	{
		*head = new_g;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_g;
	}
	return (new_g);
}
