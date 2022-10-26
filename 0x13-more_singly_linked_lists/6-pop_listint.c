#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - pop the first node
  * @head: pointer to linked list
  *
  * Return: pointer to update list
  */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n, count = 0;

	if (*head == NULL)
		return (0);
	ptr = *head;
	n = ptr->n;

	while (count < 1)
	{
		ptr = ptr->next;
		count++;
	}

	free(*head);

	*head = ptr;

	return (n);
}
