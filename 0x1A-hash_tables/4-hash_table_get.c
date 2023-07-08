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
	unsigned char *key_temp = NULL;
	hash_node_t *temp = NULL;

	if (!ht)
		return (NULL);
	key_temp = strdup(key);
	if (!key_temp)
		return (NULL);
	index = key_index(key_temp, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (strncmp(key, temp->key, strlen(key)) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);

}
