#include "lists.h"

/**
  * add_dnodeint - Add a new node at the
  * beginning of a dlinked list
  * @head: pointer to start of the list
  * @n: data to be added to the new node
  *
  * Return: Address to the new element or
  * NULL if it failed
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	nodePtr temp, new_node;

	temp = *head;
	new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	temp->prev = new_node;
	new_node->next = temp;
	*head = new_node;

	return (*head);
}
