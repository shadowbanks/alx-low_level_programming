#include "lists.h"

/**
 * add_nodeint - Add a new node to a list
 * @head: Pointer to head pointer
 * @n: data to be stored in the new node
 *
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	nextPtr new_node = NULL, temp = NULL;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);

		temp = *head;
		new_node->n = n;
		new_node->next = temp;
		*head = new_node;

	}
	return (NULL);
}
