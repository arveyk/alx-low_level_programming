#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: pointer to first node
 *
 * Return: None
 */
void free_listint(listint_t *head)
{

	listint_t *temp;

	if (head == NULL)
		return;
	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

}
