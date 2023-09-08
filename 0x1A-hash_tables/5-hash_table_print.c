#include <stddef.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 *
 * Return: none
 */
void hash_table_print(const hash_table_t *ht)
{

	hash_table_t *trav = (hash_table_t *)ht;
	unsigned long int idx = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (trav->array[idx] != NULL)
	{
		printf("'%s': '%s'", trav->array[idx]->key, trav->array[idx]->value);
		idx++;
	}
	printf("}\n");
}
