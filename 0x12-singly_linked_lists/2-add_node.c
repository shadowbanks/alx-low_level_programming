#include "lists.h"

/**
 * add_node - Add a new node to the beginning of a linked list
 * @head: pointer to a linked list
 * @str: data to be saved in the new node
 *
 * Return: address to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *new_str = strdup(str);
	nextPtr new_node = NULL;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}

	new_node->len = _strlen(new_str);
	new_node->str = new_str;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

/**
 * _strlen - Calculate length of string
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0' && s != NULL)
		i++, s++;
	return (i);
}
