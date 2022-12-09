#include <stdlib.h>
#include "lists.h"

/**
  * free_dlistint - free memory of a dlinked list
  * @head: pointer to the linked list
  *
  * Return: nothing
  */

void free_dlistint(dlistint_t *head)
{
	nodePtr temp, temp2;

	if (head == NULL)
		return;
	temp = head;
	temp2 = head;

	while (temp->next != NULL)
	{
		temp = temp->next;
		free(temp2);
		temp2 = temp;
	}
	free(temp2);
}
