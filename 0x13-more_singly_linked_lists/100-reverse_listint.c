#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t list
 * @head: address of pointer to first node
 *
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr_nxt = NULL;
	listint_t *prev = NULL;

	if (*head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		ptr_nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = ptr_nxt;
	}
	*head = prev;
	return (prev);
}
