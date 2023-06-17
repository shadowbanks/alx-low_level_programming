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
	/*Delete node at the beginning i.e index == 0*/
	if (index == 0 && *head != NULL)
	{
		temp = (*head)->next;
		temp->prev = NULL;
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
	/*prep for node delete at a specific index*/
	if (temp2->next != NULL)
	{
		temp2->next->prev = temp;
		temp->next = temp2->next;
		temp2->next = NULL;
		temp2->prev = NULL;
	}
	else
	{/*prep to delete last node*/
		temp2->prev = NULL;
		temp->next = NULL;
	}
	free(temp2);

	return (1);
}
