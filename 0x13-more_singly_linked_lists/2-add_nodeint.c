#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - Add a node to the beginning of the linked list
  * @head: pointer to pointer to a linked list
  * @n: data for the new node
  *
  * Return: pointer to the beginning of the list
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = malloc(sizeof(listint_t));

	if (*head == NULL || head == NULL)
		return (NULL);

	temp = *head;

	*head = ptr;

	ptr->n = n;
	ptr->next = temp;

	return (*head);
}
