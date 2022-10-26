#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint_end - Add a node to the end of a linked list
  * @head: pointer to the beginning of a linked list
  * @n: data for the new node
  *
  * Return: pointer to the linked list
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

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

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = temp;
	return (*head);
}
