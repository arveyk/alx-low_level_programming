#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * pop_listint - removes the first node of a listint_t list
 * @head: address of pointer to the first node
 *
 * Return: head node's data or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = temp;
	return (data);
}
