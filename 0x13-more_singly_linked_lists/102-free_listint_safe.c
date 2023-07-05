#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list, sets the pointer to null
 * after freeing
 * @head: address of pointer to head node
 *
 * Return: None.
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *trav;
	size_t list_ct = 0;

	if (head == NULL || *head == NULL)
		return (0);
	trav = *head;
	while (*head != NULL)
	{
		trav = (*head);
		(*head) = (*head)->next;
		list_ct++;
		free(trav);
	}
	*head = NULL;
	return (list_ct);
}
