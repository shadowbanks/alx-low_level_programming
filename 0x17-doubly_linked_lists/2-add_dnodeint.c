#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning a doubly liked list
 * @head: double pointer to a linked list
 * @n: new data to be added
 *
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	node new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = *head;
	if (*head)
		new_node->next->prev = new_node;
	*head = new_node;
	return (new_node);
}
