#include "lists.h"
#include <string.h>

/**
 * get_nodeint_at_index - gets the nth node of a listint_t
 * @head: pointer to head node
 * @index: the position to be searched
 *
 * Return: pointer to the node at nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *ptr = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
		ptr = ptr->next;
	return (ptr);
}
