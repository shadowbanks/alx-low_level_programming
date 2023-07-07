#include "hash_tables.h"

/**
 * key_index - Get the index of a key
 * @key: key
 * @size: size of the hash_table
 *
 * Return: the index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);


	return (index % size);
}
