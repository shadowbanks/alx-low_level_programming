#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - free memory of a linked list
  * and set head to NULL
  * @head: pointer to the linked list
  *
  * Return: nothing
  */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *ptr2;

	if (*head == NULL || head == NULL)
		return;
	ptr = *head;
	ptr2 = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		free(ptr2);
		ptr2 = ptr;
	}
	free(ptr2);
	*head = NULL;
}
