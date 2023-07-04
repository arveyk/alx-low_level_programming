#include "lists.h"
#include <stddef.h>

/**
 * find_listint_loop - finds a loop int linked list
 * @head: pointer to first node
 *
 * Return: address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{

	listint_t *trav;
	listint_t *ahead;

	if (head == NULL)
		return (NULL);
	trav = head;
	ahead = head;

	while (ahead != NULL)
	{
	
		if (trav == ahead)
			return (trav);
		trav = trav->next;
		ahead = ahead->next->next;
	}
	return (NULL);
}
