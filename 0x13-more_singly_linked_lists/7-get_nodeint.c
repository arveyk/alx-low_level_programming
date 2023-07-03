#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - returns the node at a give index
 * @head: pointer to the head node
 * @index: index of node to search
 *
 * Return: Pointer to required index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *trav;
	listint_t *req_node;
	unsigned int req = 0;

	if (head == NULL)
		return (NULL);
	trav = head;
	while (trav != NULL)
	{

		if (req == index)
		{
			req_node = trav;
			break;
		}
		req++;
		trav = trav->next;
	}
	if (req != index)
		return (0);
	return (req_node);
}
