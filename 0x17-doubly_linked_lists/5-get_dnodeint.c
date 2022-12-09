#include <stdio.h>
#include "lists.h"

/**
  * get_dnodeint_at_index - check for a particular node in a dlinked list
  * @head: pointer to the list
  * @index: node index
  *
  * Return: pointer to node
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	nodePtr temp;
	unsigned int count = 0, i = 0;

	if (head == NULL)
		return (NULL);

	temp = head;

	while (temp->next != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (index >= count)
		return (NULL);

	temp = head;

	while (i < index)
	{
		i++;
		temp = temp->next;
	}
	return (temp);
}
