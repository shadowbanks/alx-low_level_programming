#include "lists.h"

/**
 * list_len - Get the number of elements in a linked list
 * @h: the linked list
 *
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;
	nextPtr temp;

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
