#include "lists.h"

/**
 * print_listint_safe - Print the address and element of a linked list
 * @head: pointer to a linked list
 *
 * Return: number of nodes, on failure exit with 98
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node, *temp;
	int cond = head < head->next ? 1 : 0;
	size_t count = 0;

	node = head;
	temp = head->next;

	if (head != NULL)
		printf("[%p] %d\n", (void *)node, node->n);
	while (node != NULL)
	{
		if (cond == 1)
		{
			if (temp < node)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				exit(98);
			}
		}
		else
		{
			if (temp > node)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				exit(98);
			}
		}
		count++;
		printf("[%p] %d\n", (void *)temp, temp->n);
		node = temp;
		if (node->next == NULL)
			break;
		temp = temp->next;
	}
	return (count);
}
