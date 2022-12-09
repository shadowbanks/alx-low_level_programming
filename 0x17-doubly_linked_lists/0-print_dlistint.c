#include "lists.h"

/**
  * print_dlistint - print elements of a double
  * linked list
  * @h: pointer to head of the list
  * Return: number of nodes
  */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;


	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
return (i);
}
