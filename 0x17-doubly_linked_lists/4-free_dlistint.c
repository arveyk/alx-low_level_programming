#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head node
 *
 * Return: No value
 */
void free_dlistint(dlistint_t *head)
{

	dlistint_t *ptr = NULL;

	if (head == NULL)
		return;
	while (head != NULL)
	{

		ptr = head->next;
		free(head);
		head = ptr;
	}

}
