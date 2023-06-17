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
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (*h == NULL)
		return (NULL);
	temp = *h;
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
		temp->next->prev = new_node;
		new_node->next = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
		new_node->n = n;
		return (new_node);
	}
	return (add_dnodeint_end(h, n));
}
