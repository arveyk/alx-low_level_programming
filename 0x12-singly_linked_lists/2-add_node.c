#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node at the beginning of linked list
 * @head: pointer to pointer of first node
 * @str: data for new node
 *
 * Return: Pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	if (*head == NULL)
		*head = temp;
	else
	{
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
