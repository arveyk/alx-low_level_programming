#include "lists.h"
#include  <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the head
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	size_t len = 0;
	list_t *curr_node = (list_t *)h;

	while (curr_node != NULL)
	{
		count++;
		if (curr_node->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			len = strlen(curr_node->str);
			printf("[%ld] %s\n", len, curr_node->str);
		}
		curr_node = curr_node->next;
	}
	return (count);
}