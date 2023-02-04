#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds node to end of list
 * @head: pointer to pointer to list
 * @str: new data
 *
 * Return: pointer to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{

	char *copy = strdup(str);
	list_t *temp = (list_t *)malloc(sizeof(list_t));
	list_t *new = *head;

	if (temp == NULL)
		return (NULL);

	temp->str = copy;
	temp->next = NULL;
	
	if (*head == NULL)
		*head = temp;
	else
	{
	while (new->next != NULL)
		new = new->next;
	new->next = temp;
	}
	return (new);

}
