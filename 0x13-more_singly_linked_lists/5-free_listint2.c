#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list, sets the pointer to null
 * after freeing
 * @head: address of pointer to head node
 *
 * Return: None.
 */
void free_listint2(listint_t **head)
{
	listint_t *trav = NULL;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		trav = (*head);
		(*head) = (*head)->next;
		free(trav);
	}
	*head = NULL;
}
