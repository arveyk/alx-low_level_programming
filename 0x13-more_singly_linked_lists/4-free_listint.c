#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free the linked list created
 * @head: pointer to head of list
 *
 * Return: NO return value.
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	for (; head != NULL; head = temp)
	{
		temp = head->next;
		free(head);
	}
}
