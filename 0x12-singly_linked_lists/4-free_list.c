#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to head node
 *
 * Return: None
 */
void free_list(list_t *head)
{
	
	list_t *trav;


	if (head == NULL)
		return;
	trav = head;
	while(head)
	{
	
		free(trav->str);
		free(trav);
		trav = head->next;
		head = head->next;
	}
	head = NULL;
}
