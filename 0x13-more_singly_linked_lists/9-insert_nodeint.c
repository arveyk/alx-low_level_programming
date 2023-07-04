#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: address of pointer to the head node
 * @idx: where to insert a new node
 * @n: Data for new node
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int check = 1;
	listint_t *trav;
	listint_t *new_node;

	if (*head == NULL && idx != 0)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	trav = *head;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	else
		while (trav != NULL)
		{
			if (check == idx - 1)
			{
				new_node->next = trav->next;
				trav->next = new_node;
				return (new_node);
			}
			check++;
			trav = trav->next;
		}
	return (NULL);
}
