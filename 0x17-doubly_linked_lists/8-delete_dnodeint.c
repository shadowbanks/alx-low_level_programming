#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at specific index
 * @head: double pointer to doubly linked list
 * @index: index of node to be deleted
 *
 * Return: 1 (on success) -1 (on failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	node temp = NULL, temp2 = NULL;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0 && *head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	temp = *head;
	i = 1;
	while (i < index && temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i != index)
		return (-1);
	temp2 = temp->next;
	temp2->next->prev = temp;
	temp->next = temp2->next;
	temp2->next = NULL;
	temp2->prev = NULL;
	free(temp2);

	return (1);
}
