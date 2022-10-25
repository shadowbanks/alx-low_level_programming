#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * print_listint - prints all the elements of a linked list
  * @h: pointer to linked list
  *
  * Return: number of nodes in the linked list
  */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
