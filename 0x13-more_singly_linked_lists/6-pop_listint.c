#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to head node's pointer
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data = (*head)->n;

	*head = (*head)->next;
	free(temp);
	return (data);
}
