#include <stdio.h>
#include "lists.h"

/**
  * get_nodeint_at_index - check for a particular node in a linked list
  * @head: pointer to the list
  * @index: node index
  *
  * Return: pointer to node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count = 0, i = index;

	if (head == NULL)
		return (NULL);

	ptr = head;

	while (ptr->next != NULL)
	{
		count++;
		ptr = ptr->next;
		i--;
	}

	if (count != index)
		return (NULL);
	return (ptr);
}
