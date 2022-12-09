#include "lists.h"

/**
  * delete_dnodeint_at_index - delete a node a specific index
  * @head: pointer to the list
  * @index: index to node to be deleted
  *
  * Return: 1 on success, -1 on failure
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	nodePtr temp = *head, del_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (temp->next == NULL)
		{
			del_node = *head;
			*head = NULL;
			free(del_node);
			return (-1);
		}
		del_node = *head;
		*head = del_node->next;
		del_node->prev = NULL;
		free(del_node);

		return (1);
	}


	while (i != index - 1)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}

	del_node = temp->next;

	temp->next = del_node->next;
	del_node->next->prev = temp;

	free(del_node);

	return (1);
}
