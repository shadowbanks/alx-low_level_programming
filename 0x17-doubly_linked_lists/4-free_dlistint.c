#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to linked list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	node temp = NULL, temp2 = NULL;

	if (head == NULL)
		return;
	temp = head;
	while (temp)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
}
