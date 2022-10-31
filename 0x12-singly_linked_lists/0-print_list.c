#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
  * print_list - print all element of a list
  * @h: pointer to a list
  *
  * Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (count);
}
