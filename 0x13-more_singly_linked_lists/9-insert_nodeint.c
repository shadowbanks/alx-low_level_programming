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

	/*create a new node*/
	temp = malloc(sizeof(listint_t));

	/*check if node was created successfully */
	if (temp == NULL)
		return (NULL);

	/*initialize the new node*/
	temp->n = n;
	temp->next = NULL;

	/*chech if the list is empty*/
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
	return (temp);
}
