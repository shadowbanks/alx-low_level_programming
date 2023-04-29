#include "lists.h"

/**
 * pop_listint - Delete the first node of a linked list
 * @head: Pointer to linked list pointer
 *
 * Return: 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	nextPtr temp = NULL, ptr = NULL;

	if (head != NULL)
	{
		if (*head !=  NULL)
		{
			temp = *head;
			ptr = temp->next;
			n = temp->n;
			*head = ptr;
			free(temp);
			return (n);
		}
		return (0);
	}
	head = NULL;
	return (0);
}
