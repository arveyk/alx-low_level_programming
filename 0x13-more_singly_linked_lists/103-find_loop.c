#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * find_listint_loop - finds a loop in a linked list
 * @head: pointer to head node
 *
 * Return: Address of node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{

	listint_t *f = head, *s = head;

	while (s && f && f->next)
	{
	
		s = s->next;
		f = f->next->next;
		if (s == f)
			break;
		else 
			return(NULL);
	}
	
	return (f);
}
