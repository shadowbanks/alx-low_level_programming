#include "hash_tables.h"

/**
 * hash_table_get - get value
 * @ht: hash table
 * @key: Key
 *
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp = NULL;
	unsigned long int index = 0;

	if (!ht)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	temp = (ht->array)[index];

	if (temp)
		return (temp->value);
	while (temp)
	{
		if (strncmp(key, temp->key, strlen(key)) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);

}
