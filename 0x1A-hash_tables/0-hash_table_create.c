#include "hash_tables.h"

/**
 * hash_table_create - This function creates a hash table
 * @size: size of the hash_table
 *
 * Return: Pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t = NULL;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);
	hash_t = malloc(sizeof(hash_table_t));

	if (!hash_t)
		return (NULL);

	hash_t->size = size;
	hash_t->array = calloc(size, sizeof(hash_node_t *));

	for (; i < size; i++)
		hash_t->array[i] = NULL;

	if (!hash_t->array)
		return (NULL);

	return (hash_t);
}
