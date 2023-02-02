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

	listint_t *new_g = malloc(sizeof(listint_t));
	listint_t *curr_posi = *head;

	if (new_g == NULL)
		return (NULL);
	else
	{
		while (curr_posi != NULL)
			curr_posi = curr_posi->next;

		curr_posi = new_g;
		new_g->n = n;
		new_g->next = NULL;
	}
	return (curr_posi);
}
