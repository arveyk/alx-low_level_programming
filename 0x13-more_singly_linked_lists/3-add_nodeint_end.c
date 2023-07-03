#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of a listint_t list
 * @head: pointer to the 1st node's pointer
 * @n: data for new node
 * 
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end = NULL;
	listint_t *trav = NULL;

	new_end = malloc(sizeof(listint_t));
	if (new_end == NULL)
		return (NULL);
	new_end->n = n;
	new_end->next = NULL;
	if (*head == NULL)
		*head = new_end;
	else
	{
		trav = *head;
		while(trav->next != NULL)
			trav = trav->next;
		trav->next = new_end;
	}
	return (new_end);
}
