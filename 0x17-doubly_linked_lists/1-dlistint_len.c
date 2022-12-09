#include "lists.h"

/**
  * dlistint_len - return number of elements in a double
  * linked list
  * @h: pointer to head of the list
  * Return: number of elements
  */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;


	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
return (i);
}
