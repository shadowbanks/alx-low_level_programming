#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a specific index
 * @head: pointer to a linked list pointer
 * @index: node index to be deleted
 *
 * Return: 1 on success or -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	nextPtr temp = NULL, temp2 = NULL;
	unsigned int i = 0;

	if (head != NULL)
	{
		if (index == 0)
		{
			if (*head != NULL)
			{
				temp = (*head)->next;
				free(*head);
				*head = temp;
				return (0);
			}
			return (-1);
		}
		temp = *head;
		for (; i < (index - 1); i++)
		{
			if (temp->next == NULL)
				return (-1);
			temp = temp->next;
		}
		if (temp->next != NULL)
		{
			temp2 = temp->next->next;
			free(temp->next);
			temp->next = temp2;
			return (0);
		}
	}
	return (-1);
}
