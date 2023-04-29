#include "lists.h"

/**
 * sum_listint - Sum all the data (n) of a linked list containing
 * interger data
 * @head: pointer to the list
 *
 * Return: sum of all integer data
 */
int sum_listint(listint_t *head)
{
	nextPtr temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
