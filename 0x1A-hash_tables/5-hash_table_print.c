#include "hash_tables.h"

/**
 * hash_table_print - Print the content of a hash table
 * @ht: pointer to a hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	int count = 0;
	unsigned long int i = 0;
	hash_node_t **temp = NULL, *temp2 = NULL;

	if (!ht)
		return;

	temp = ht->array;

	printf("{");
	while (i < ht->size)
	{
		if (temp[i])
		{
			count++;
			if (count > 1)
				printf(", ");
			printf("'%s': '%s'", temp[i]->key, temp[i]->value);
			/* Check if there's other element with the same key and print if any*/
			temp2 = temp[i]->next;
			if (temp2)
			{
				printf(", '%s': '%s'", temp2->key, temp2->value);
				temp2 = temp2->next;
			}
		}
		i++;
	}
	printf("}\n");
}
