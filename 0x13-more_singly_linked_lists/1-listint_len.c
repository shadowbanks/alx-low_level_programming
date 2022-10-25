#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * listint_len - Count amount of nodes
  * @h: pointer to linked list
  *
  * Return: number of nodes in the linked list
  */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
