#include "lists.h"

/**
 * find_listint_loop - Find the loop in a liked list
 * @head: pointer to a liked list
 *
 * Return: Adress to the start of the loop
 * or NULL if no loop exist
 */
listint_t *find_listint_loop(listint_t *head)
{
	nextPtr node = NULL;
	int cond = head < head->next ? 1 : 0;

	node = head;
	while (node != NULL)
	{
		if (cond == 1)
		{
			if (node->next <= node)
				return (node);
		}
		else
		{
			if (node->next >= node)
				return (node);
		}
		if (node->next == NULL)
			break;
		node = node->next;

	}
	return (NULL);
}
