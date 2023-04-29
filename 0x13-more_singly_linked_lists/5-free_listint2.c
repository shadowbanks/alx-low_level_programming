#include "lists.h"

/**
 * free_listint2 - Free a linked list and set head to NULL
 * @head: pointer to linked list pointer
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	nextPtr ptr = NULL, temp = NULL;

	if (head != NULL)
	{
		ptr = *head;

		while (ptr != NULL)
		{
			temp = ptr->next;
			free(ptr);
			ptr = temp;
		}
		head = NULL;
	}
}
