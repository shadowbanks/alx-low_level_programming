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
	size_t count = 0;

	if (head != NULL)
		printf("[%p] %d\n", (void *)head, head->n);

	node = head->next;
	prev = head;

	while (node != NULL)
	{
		if (node > prev)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			exit(98);
		}
		count++;
		printf("[%p] %d\n", (void *)node, node->n);
		prev = node;
		node = node->next;
	}
	return (count);
}
