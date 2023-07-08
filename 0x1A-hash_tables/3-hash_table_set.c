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
	hash_node_t *item = NULL, **array = NULL, *temp = NULL;

	if (!ht)
		return (0);

	array = ht->array;

	array = calloc(ht->size, sizeof(hash_node_t *));

	if (!array)
		return (0);

	item = get_item(key, value);
	if (!item)

		return (0);

	index = key_index((unsigned char *)item->key, ht->size);
	printf("%ld\n", index);

	temp = array[index];

	array[index] = item;

	if (temp == NULL)
		return (1);

	item->next = temp;
	return (1);
}

/**
 * get_item - Create an item to be saved
 * @key: Key
 * @value: Key's value
 *
 * Return: pointer to new item
 */
hash_node_t *get_item(const char *key, const char *value)
{
	hash_node_t *item = NULL;
	char *key_m = NULL, *value_m = NULL;

	key_m = malloc(sizeof(char *) * strlen(key) + 1);
	value_m = malloc(sizeof(char *) * strlen(value) + 1);
	if (key == NULL || strcmp(key, "") == 0)
		return (NULL);

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

	item->key = strcpy(key_m, key);
	item->value = strcpy(value_m, value);
	item->next = NULL;

	return (item);
}
