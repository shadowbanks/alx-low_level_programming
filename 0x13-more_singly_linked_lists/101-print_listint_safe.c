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
	int cond;
	size_t count = 0;
	uintptr_t addr = (uintptr_t)head;

	cond = head < head->next ? 1 : 0;
	node = head;
	temp = head->next;

	if (head != NULL)
		printf("[%p] %d\n", (void *)head, head->n);
	while (node != NULL)
	{
		if (cond == 1)
		{
			if ((uintptr_t)node->next < addr)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				exit(98);
			}
		}
		else
		{
			if ((uintptr_t)node->next > addr)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				exit(98);
			}
		}
		count++;
		printf("[%p] %d\n", (void *)temp, temp->n);
		node = temp;
		if (temp->next == NULL)
			break;
		addr = (uintptr_t)node;
		temp = temp->next;
	}
	return (count);
}
