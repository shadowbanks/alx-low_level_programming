#include "lists.h"

/**
 * print_listint - Print all element of a linked list
 * @h: pointer to list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	nextPtr temp = NULL;

	if (h != NULL)
	{
		temp = h->next;
		printf("%d\n", h->n);
		i++;
		while (temp != NULL)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
			i++;
		}
	}
	return (i);
}
