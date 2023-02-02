#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * listint_len - counts number of elements
 * @h: pointer to head node
 *
 * Return: Number of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{

	size_t ele_num = 0;
	listint_t *ptr = (listint_t *)h;

	while (ptr != NULL)
	{
		ele_num++;
		ptr = ptr->next;
	}

	return (ele_num);
}
