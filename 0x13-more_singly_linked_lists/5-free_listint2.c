#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free the linked list created
 * @head: pointer to head of list
 *
 * Return: NO return value.
 */
void free_listint2(listint_t **head)
{

	listint_t *ptr = *head;
	listint_t *temp = NULL;

	for (; ptr != NULL; ptr = temp)
	{
		temp = ptr->next;
		free(ptr);
	}
	*head = NULL;
}
