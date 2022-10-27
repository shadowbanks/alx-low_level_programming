#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - Add a node to a particular index
  * of a linked list
  * @head: pointer to the beginning of a linked list
  * @n: data for the new node
  * @idx: index for new node to be inserted
  *
  * Return: pointer to the updated linked list
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = idx;
	listint_t *ptr, *temp, *ptr2;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	ptr = NULL;
	ptr = *head;

	while (i > 1)
	{
		ptr = ptr->next;
		i--;
	}

	ptr2 = ptr->next;
	ptr->next = temp;
	temp->next = ptr2;
	return (*head);
}
