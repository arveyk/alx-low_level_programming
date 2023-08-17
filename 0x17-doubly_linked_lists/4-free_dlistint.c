#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint -frees a dlistint_t list
 * @head: pointer to first node of list
 *
 * Return: None
 */
void free_dlistint(dlistint_t *head)
{

	dlistint_t *trav;

	if (head == NULL)
		return;
	trav = head;
	while (trav != NULL)
	{
		head = head->next;
		free(trav);
		trav = head;
	}
}
