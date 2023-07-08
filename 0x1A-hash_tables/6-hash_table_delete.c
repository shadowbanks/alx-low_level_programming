#include "hash_tables.h"

/**
 * hash_table_delete - Free all memory used/allocated
 * for the hash_table
 * @ht: pointer to hash table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL, *temp2 = NULL, **array_ = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;

	array_ = ht->array;

	while (i < ht->size)
	{
		temp = array_[i];
		while (temp)
		{
			temp2 = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp2;
		}
		i++;
	}
	free(array_);
	free(ht);
}
