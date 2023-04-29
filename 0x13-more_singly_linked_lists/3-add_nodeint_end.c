#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a list
 * @head: pointer to head pointer
 * @n: data to be stored in the new node
 *
 * Return: address to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	nextPtr new_node = NULL, temp = NULL;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;

		if (*head != NULL)
		{
			temp = *head;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = new_node;
		}
		else
			*head = new_node;
		return (new_node);
	}
	return (NULL);
}
