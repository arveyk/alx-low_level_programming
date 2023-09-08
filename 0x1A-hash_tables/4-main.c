#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - checks the code
 *
 * Return: EXIT_SUCCESS
 */
int main(void)
{

	hash_table_t *ht;
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Bob", "and Kris love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Cool");
	hash_table_set(ht, "98", "Battery Streetz");

	value = hash_table_get(ht, "python");
	printf("%s:%s\n", "python", value);
	value = hash_table_get(ht, "Bob");
	printf("%s:%s\n", "Bob", value);
	value = hash_table_get(ht, "N");
	printf("%s:%s\n", "N", value);
	value = hash_table_get(ht, "Asterix");
	printf("%s:%s\n", "Asterix", value);
	value = hash_table_get(ht, "Betty");
	print("%s:%s\n", "Betty" value);
	value = hash_table_get(ht, "98");
	print("%s:%s\n", "98" value);
	value = hash_table_get(ht, "c");
	print("%s:%s\n", "c", value);
	value = hash_table_get(ht, "javascript");
	print("%s:%s\n", "javascript", value);
	return (EXIT_SUCCESS);
}
