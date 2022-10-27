#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - sum up all data of a linked list
  * @head: pointer to linked list
  *
  * Return: sum of all data(n)
  */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum = sum + (ptr->n);
		ptr = ptr->next;
	}
	return (sum);
}
