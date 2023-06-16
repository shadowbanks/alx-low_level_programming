#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieve node at given index of a doubly linked list
 * @head: pointer to a doubly linked list
 * @index: position of node to be retrived
 *
 * Return: required node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	node temp = NULL;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	temp = head;
	while (i < index && temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i == index)
		return (temp);
	return (NULL);
}
