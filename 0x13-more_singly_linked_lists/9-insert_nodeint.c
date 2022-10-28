#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *loop(listint_t *ptr, unsigned int idx);

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
/*	unsigned int i = 1;*/
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

	if (idx == 0)
	{
		ptr2 = ptr;
		ptr = temp;
		temp->next = ptr2;
		*head = ptr;
		return (temp);
	}

	 ptr = loop(ptr, idx);

	if (ptr == NULL)
		return (NULL);

	ptr2 = ptr->next;
	ptr->next = temp;
	temp->next = ptr2;
return (temp);
}

/**
  * loop - move pointer to a particular node index
  * @head: pointer to list
  * @idx: node idx
  *
  * Return: new pointer
  */

listint_t *loop(listint_t *head, unsigned int idx)
{
	listint_t *ptr = head;

	unsigned int i = 1;

	while (i < idx)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		i++;
	}
return (ptr);
}
