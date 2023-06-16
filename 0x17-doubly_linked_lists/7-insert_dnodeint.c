#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a specific index
 * @h: double pointer to  a doubly linked list
 * @idx: position node to be inserted
 * @n: data for new node
 *
 * Return: new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	node temp = NULL, new_node = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || h == NULL)
		return (NULL);
	new_node->n = n;
	temp = *h;
	if (*h == NULL && idx == 0)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = temp;
		*h = new_node;
		return (new_node);
	}
	i = 1;
	while (i < idx && temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i != idx)
		return (NULL);
	if (temp->next != NULL)
	{
		new_node->next = temp->next;
		temp->next->prev = new_node;
	}
	else
		new_node->next = NULL;
	new_node->prev = temp;
	temp->next = new_node;
	return (new_node);
}
