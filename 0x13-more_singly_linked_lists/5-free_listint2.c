#include "lists.h"

/**
 * free_listint2 - Free a linked list and set head to NULL
 * @head: pointer to linked list pointer
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	nextPtr temp2 = NULL, temp = NULL;

	if (head != NULL)
	{
		temp = *head;

		while (temp != NULL)
		{
			temp2 = temp;
			temp = temp->next;
			free(temp2);
		}
		*head = NULL;
	}
}
