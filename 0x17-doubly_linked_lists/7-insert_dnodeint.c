#include "lists.h"

/**
  * get_dnodeint_at_index - check for a particular node in a dlinked list
  * @head: pointer to the list
  * @index: node index
  *
  * Return: pointer to node
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	nodePtr temp, new_node;
	unsigned int i;

	new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*h == NULL)
		return (NULL);

	temp = *h;

	for (i = 0; i <= idx; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new_node->prev = temp;
	new_node->next = temp->next;
	temp = new_node;
	temp->next->prev = new_node;


	return (new_node);
}
