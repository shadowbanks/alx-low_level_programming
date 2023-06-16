#include "lists.h"

/**
 * dlistint_len - Print every element of a doubly linked list
 * @h: pointer to list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	node temp = NULL;
	int i = 0;

	if (h)
	{
		temp = h->next;
		i = 1;
		while (temp)
		{
			temp = temp->next;
			i++;
		}
	}
	return (i);
}
