#include "lists.h"

/**
 * print_list - Print  all element of a list
 * @h: list to printed
 *
 * Return: number of elements contained in the list
 */

size_t print_list(const list_t *h)
{
	nextPtr temp = h->next;
	size_t i = 0;

	if (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		i++;
		while (temp != NULL)
		{
			if (temp->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", temp->len, temp->str);
			i++;
			temp = temp->next;
		}
	}

	return (i);
}
