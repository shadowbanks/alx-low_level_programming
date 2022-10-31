#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
  * list_len - count number of nodes in a linked list
  * @h: pointer to a list
  *
  * Return: number of nodes
  */

size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
