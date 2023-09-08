#include "hash_tables.h"

/**
 * key_index - finds the index of a key
 * @key: the key whose index is to be found
 * @size: the size of the hash table array
 *
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int index = 0;

	index = hash_djb2(key);
	index = index % size;
	return (index);
}
