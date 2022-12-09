#include "lists.h"

/**
  * insert_dnodeint_at_index - insert a new node at specific index
  * @h: head of the list
  * @idx: index for the node to be inserted
  * @n: data for the new node
  *
  * Return: Pointer to the new node or NULL on failure
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	nodePtr new_node, temp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, idx));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	temp = *h;

	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			new_node->prev = temp;
			temp->next = new_node;
			if (new_node->next != NULL)
				new_node->next->prev = new_node;
			return (new_node);
		}
		temp = temp->next;
		i++;
	}

	return (NULL);
}
