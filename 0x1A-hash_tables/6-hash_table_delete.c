#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 *
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{

	hash_table_t *temp = ht;
	unsigned long int index = 0;

	while (temp->array[index] != NULL)
	{

		free(temp->array[index]->key);
		free(temp->array[index]->value);
		temp->array[index] = NULL;
		index++;
	}
	free(ht);
	ht = NULL;
}
