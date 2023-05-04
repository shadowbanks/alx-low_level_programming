#include "lists.h"

/**
 * free_listint_safe - Free a linked with a loop
 * @h: pointer to the list pointer
 *
 * Return: the size of free'd node
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	nextPtr node = NULL, prev = NULL;
	int cond = *h < (*h)->next ? 1 : 0;

	if (*h != NULL)
	{
		node = *h;

		while (node != NULL)
		{
			prev = node;
			if (cond == 1)
			{
				if (node->next <= node)
				{
					h = NULL;
					return (count);
				}
			}
			else
			{
				if (node->next >= node)
				{
					h = NULL;
					return (count);
				}
			}
			count++;
			node = node->next;
			free(prev);
		}
	}
	h = NULL;
	return (count);
}
