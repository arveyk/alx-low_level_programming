#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - inserts a node at point idx
 * @head: pointer to pointer to head
 * @index: index where node should be deleted
 *
 * Return: address of new node, NULL if unsuccessful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int k = 0;
	listint_t *ptr = *(head);
	listint_t *curr_point = NULL;


	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	for (; k < index - 2; k++)
	{
		ptr = ptr->next;
		if (!ptr)
			return (-1);
	}
	if (ptr->next)
	{
		curr_point = ptr->next;
		ptr->next = curr_point->next;
		free(curr_point);
	}
	else
	{

		ptr->next = NULL;
		free(curr_point);
	}

	return (1);
}
