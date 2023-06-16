#include "lists.h"

/**
 * sum_dlistint - Sum all data in a doubly linked list
 * @head: pointer to a doubly linked list
 *
 * Return: sum of data or 0 (if list is empty)
 */
int sum_dlistint(dlistint_t *head)
{
	node temp = NULL;
	int sum = 0;

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
