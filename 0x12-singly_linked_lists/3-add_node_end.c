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
	list_t *new_ele = *head;


	if (*head == NULL)
		return (new_ele);
	while (new_ele->next != NULL)
		new_ele = new_ele->next;

	new_ele->str = copy;
	new_ele->next = NULL;

	if (!new_ele)
		return (NULL);
	return (new_ele);

}
