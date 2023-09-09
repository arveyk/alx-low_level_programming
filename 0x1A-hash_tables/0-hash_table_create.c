#include "hash_tables.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 *
 * Return: pointer to the created hash table, NULL if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = calloc(size, sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->array[size - 1] = NULL;
	return (new_table);
}
