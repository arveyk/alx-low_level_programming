#include <string.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrives the value associated with a given key
 * @ht: pointer to the hash table
 * @key: the key whose value is to be retrieved
 *
 * Return: value retrieve, NULL if the key could not be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

	hash_table_t *trav = (hash_table_t *)ht;
	unsigned long int index = 0;
	unsigned long int size = ht->size;

	while (index < size)
	{
		if (trav->array[index] == NULL)
			break;
		if (strcmp(trav->array[index]->key, key) == 0)
			return (trav->array[index]->value);
		index++;
	}
	return (NULL);
}
