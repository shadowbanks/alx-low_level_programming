#include "lists.h"

/**
  * sum_dlistint - return sum of elements in a double
  * linked list
  * @head: pointer to head of the list
  * Return: sum of elements
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;


	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
return (sum);
}
