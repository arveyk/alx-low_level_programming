#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints elements of a string
 * @h: pointer to the first node.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{

	size_t  ele_num = 0;
	listint_t *ptr = (listint_t *)h;

	while (ptr != NULL)
	{
		ele_num++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;

	}
	return (ele_num);
}
