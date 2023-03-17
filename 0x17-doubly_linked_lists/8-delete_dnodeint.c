#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes node at a given index
 * @head: pointer to head node address
 * @index: position of node to be deleted
 *
 * Return: pointer to new node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *ptr = (*head);
	dlistint_t *ptr1 = (*head);
	dlistint_t *ptr2 = (*head);
	dlistint_t *pcurr = (*head);
	size_t check = 0, check1 = 0, check2 = 0, len = 0;


	if (head == NULL)
		return (-1);
	for (; ptr->next != NULL; len++)
		ptr = ptr->next;
	if (index > len)
		return (-1);
	if (index == 0)
	{
		ptr = (*head)->next;
		ptr->prev = NULL;
		return (1);
	}
	if (index == len)
	{
		while (check++ < len - 1)
			ptr = ptr->next;
		while (check1++ < len)
			ptr2 = ptr2->next;
		ptr->next = NULL;
		return (1);
	}
	while (check++ < index - 1)
		ptr1 = ptr1->next;
	while (check1++ < index + 1)
		ptr2 = ptr2->next;
	while (check2++ < index)
		pcurr = pcurr->next;
	ptr1->next = ptr2;
	ptr2->prev = ptr1;
	return (1);
}
