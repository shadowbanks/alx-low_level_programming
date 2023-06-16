#include "lists.h"

/**
 * print_dlistint - Print every element of a doubly linked list
 * @h: pointer to list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	node temp = NULL;
	int i = 0;

	if (h)
	{
		temp = h->next;
		printf("%d\n", h->n);
		i = 1;
		while (temp)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
			i++;
		}
	}
	return (i);
}
