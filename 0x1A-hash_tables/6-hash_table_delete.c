#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 *
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{

	hash_table_t *temp = ht;

	while (trav[index] != NULL)
	{

		free(trav->array[index]->key);
		free(trav->array[index]->value);
		trav->index = NULL;
		index++;
	}
	free(ht);
	ht = NULL;
}
