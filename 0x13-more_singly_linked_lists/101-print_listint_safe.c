#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_listint_safe - prints a listint_t list
 * @head: pointer to first node
 *
 * Return: number of node in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *trav;

	if (head == NULL)
		return (0);
	
	trav = (listint_t *)head;
	while (trav != NULL && count < 20)
	{
		printf("[%p] %d\n", (void *)trav, trav->n);
		count++;
		trav = trav->next;
	}
	return (count);
}
