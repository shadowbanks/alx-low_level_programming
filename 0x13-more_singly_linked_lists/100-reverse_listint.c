#include "lists.h"

/**
 * reverse_listint - Reverse a linked list
 * @head: pointer to a linked list pointer
 *
 * Return: pointer to the first node of the reversed link
 */
listint_t *reverse_listint(listint_t **head)
{
	nextPtr temp = NULL, temp2 = NULL;

	if (head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = NULL;

		while (temp != NULL)
		{
			temp2 = temp->next;
			temp->next = *head;
			*head = temp;
			temp = temp2;
		}
		return (*head);
	}
	return (NULL);
}
