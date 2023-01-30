#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the list structure
 * @head: pointer to list
 *
 * Return: None
 */
void free_list(list_t *head)
{

	list_t *pres_point;

	while (head != NULL)
	{
		pres_point = head;
		head = head->next;
		free(pres_point);
	}
}
