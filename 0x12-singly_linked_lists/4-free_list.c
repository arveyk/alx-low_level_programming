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

	list_t *ptr = NULL;

	for (; head != NULL; head = ptr)
	{
		ptr = head->next;
		free(head->str);
		free(head);
	}
	head = NULL;
}
