#include "hash_tables.h"

/**
 * hash_table_t - This function creates a hash table
 * @size: size of the hash_table
 *
 * Return: Pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t = NULL;

	if (size == 0)
		return NULL;
	hash_t = malloc(sizeof(hash_node_t));

	if (!hash_t)
		return NULL;

	hash_t->size = 

	return (hash_t);
}
