#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: the key to add
 * @value: the value belonging to the key
 *
 * Return: 1 if successful, 0 if it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int position;
	unsigned long int size = ht->size;
	hash_node_t *new_node;

	if (!strlen(key))
		return (0);
/*
 * while(idx < size)
	{	if(strcmp(ht[idx], key) == 0)
		{
			return (0);
		}
		idx++;
	}
	unsigned long int idx = 0;
	*/
	position = key_index((const unsigned char *)key, size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	ht->array[position] = new_node;
	return (1);
}
