#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - prints the content of a linkes list's node
 * @h: pointer to first node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	list_t *trav;

	if (h == NULL)
		return (0);
	trav = (list_t *)h;
	while (trav != NULL)
	{
		if (trav->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%ld] %s\n", strlen(trav->str), trav->str);
		trav = trav->next;
		i++;
	}
	return (i);
}
