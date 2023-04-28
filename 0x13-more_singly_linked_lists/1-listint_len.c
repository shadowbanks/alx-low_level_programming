#include "lists.h"

/**
 * listint_len - Count the number of nodes
 * @h: pointer to a list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	nextPtr temp = NULL;

	if (h != NULL)
	{
		i++;
		temp = h->next;

		while (temp != NULL)
		{
			i++;
			temp = temp->next;
		}
	}

	return (i);
}
