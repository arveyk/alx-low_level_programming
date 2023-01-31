#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adds new nodes at beginning of list
 * @head: pointer to beginning of list
 * @str: pointer to string
 *
 * Return: Address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str2 = strdup(str);
	list_t *new_n = (list_t *)malloc(sizeof(list_t));

	new_n->str = str2;
	new_n->next = *head;
	*head = new_n;

	if (!new_n)
		return (NULL);
	return (new_n);

}
