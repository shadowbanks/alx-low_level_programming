#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node at a certain index
 * @head: pointer to linked list pointer
 * @idx: index where the new node should be added
 * @n: data to be added to the node
 *
 * Return: Pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	nextPtr temp = NULL, new_node = NULL;
	unsigned int i = 0;

	if (head != NULL)
	{
		temp = *head;
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}

		for (; i < (idx - 1); i++)
		{
			if (temp->next == NULL)
				return (NULL);
			temp = temp->next;
		}
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
	return (NULL);
}
