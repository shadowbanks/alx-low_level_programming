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
	int cond = head < head->next ? 1 : 0;
	size_t count = 0;

	if (head != NULL)
		printf("[%p] %d\n", (void *)head->next, head->n);
	node = head->next;
	prev = head;

	while (node->next != NULL)
	{
		if (cond == 1)
		{
			if (prev > node)
			{
				printf("-> [%p] %d\n", (void *)node->next, node->n);
				exit(98);
			}
		}
		else
		{
			if (prev < node)
			{
				printf("-> [%p] %d\n", (void *)node->next, node->n);
				exit(98);
			}
		}
		count++;
		printf("[%p] %d\n", (void *)node->next, node->n);
		prev = node;
		if (node->next == NULL)
			break;
		node = node->next;
	}
	return (count);
}
