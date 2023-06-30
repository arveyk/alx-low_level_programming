#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of a list_t list
 * @head: pointer to the pointer of the 1st node
 * @str: data for new node
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_end;

	new_end = malloc(sizeof(list_t));
	if (!new_end)
		return (NULL);
	new_end->str = strdup(str);
	new_end->next = NULL;
	if (*head == NULL)
		*head = new_end;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_end;
	}
	return (new_end);
}
