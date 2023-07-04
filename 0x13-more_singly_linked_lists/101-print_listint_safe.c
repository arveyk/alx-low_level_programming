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
	listint_t *break_pnt = (listint_t *)head;

	if (head == NULL)
		return (0);
	
	while (head != NULL && count < 50)
	{
		if (head == break_pnt && count > 0)
			return (count);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	return (98);
}
