#include "lists.h"

/**
 * print_listint_safe - Print the address and element of a linked list
 * @head: pointer to a linked list
 *
 * Return: number of nodes, on failure exit with 98
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node, *prev;
	int cond = (head->next > head) ? 1 : 0;
	size_t count = 0;

	node = head;
	prev = NULL;

	while (node != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)node, node->n);

		if (cond == 1)
		{
			if (node->next < node || node->next < prev)
			{
				printf("-> [%p] %d\n", (void *)node->next, node->next->n);
				exit(98);
			}
		}
		else
		{
			if (node->next > node || node->next > prev)
			{
				printf("-> [%p] %d\n", (void *)node->next, node->next->n);
				exit(98);
			}
		}
		prev = node;
		node = node->next;
	}
	return (count);
}
