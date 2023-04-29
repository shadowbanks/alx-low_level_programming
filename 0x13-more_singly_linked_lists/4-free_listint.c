#include "lists.h"

/**
 * free_listint - free a linked list
 * head: pointer to the linked list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	nextPtr temp = head, temp2 = NULL;
	while (temp != NULL)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}
}
