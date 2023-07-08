#include "hash_tables.h"

/**
 * hash_table_set - Set a key/value pair
 * @ht: pointer to heash table
 * @key: Key
 * @value: Key's value
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *item = NULL, *temp = NULL;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	item = make_item(key, value);
	if (!item)
	{
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);
	/*printf("INDEX SETTING %lu\n", index);*/

	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = item;
		return (1);
	}

	temp = (ht->array)[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			free(item->key);
			free(item->value);
			free(item);
			return (1);
		}
		temp = temp->next;
	}

	item->next = (ht->array)[index];
	(ht->array)[index] = item;

	return (1);
}

/**
 * make_item - Create an item to be saved
 * @key: Key
 * @value: Key's value
 *
 * Return: pointer to new item
 */
hash_node_t *make_item(const char *key, const char *value)
{
	hash_node_t *item = NULL;
	char *key_m = NULL, *value_m = NULL;

	key_m = strdup(key);
	value_m = strdup(value);
	if (!key_m)
		return (NULL);
	if (!value_m)
	{
		free(key_m);
		return (NULL);
	}

	item = malloc(sizeof(hash_node_t));
	if (!item)
	{
		free(key_m);
		free(value_m);
		return (NULL);
	}

	item->key = key_m;
	item->value = value_m;
	item->next = NULL;

	return (item);
}
