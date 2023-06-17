#include "lists.h"

/**
 * print_dlistint_reverse - Print every element of a doubly linked list
 * @h: pointer to list
 *
 * Return: number of nodes
 */
size_t print_dlistint_reverse(const dlistint_t *h)
{
	node temp = NULL;
	int i = 0;

	if (h)
	{
		temp = h->next;
		i = 1;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		while (temp)
		{
			printf("%d\n", temp->n);
			temp = temp->prev;
			i++;
		}
	}
	return (i);
}
