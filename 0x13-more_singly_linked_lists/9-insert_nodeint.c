#include "lists.h"

/**
 * insert_nodeint_at_index
 * @head: pointer to pointer to head
 * @idx: index where new node should be added
 * @n: data for new node
 *
 * Return: address of new node, NULL if unsuccessful
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *new_n = (listint_t *)malloc(sizeof(listint_t));
	listiny_t *ptr = *head;
	listint_t *temp = NULL;

	unsigned int k = 0;

	for (; k < idx - 2; k++)
		ptr = ptr->next;

	temp = ptr->next;
	ptr->next = new_n;
	new_n->next = temp;

	new_n->n = n;
	return (new_n);
}
