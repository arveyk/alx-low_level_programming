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
	hash_node_t *tmp_node;

	if (ht == NULL)
		return (0);
	if (!key || !strlen(key))
		return (0);
	position = key_index((const unsigned char *)key, size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	if (key)
		new_node->key = strdup(key);
	if (value)
		new_node->value = strdup(value);
	if (ht->array[position] != 0)
	{
		ht->array[position] = new_node;
		new_node->next = NULL;
	}
	else
	{
		tmp_node = ht->array[position];
		ht->array[position] = new_node;
		new_node->next = tmp_node;
	}
	return (1);
}
