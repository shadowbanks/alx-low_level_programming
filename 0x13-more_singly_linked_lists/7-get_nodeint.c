#include "lists.h"

/**
 * get_nodeint_at_index - get the address of the nth node of a linked list
 * @head: pointer to the linked list
 * @index: is the position of the node to be returned
 *
 * Return: address to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	nextPtr temp;

	if (head != NULL)
	{
		temp = head;
		for (; i < index; i++)
		{
			if (temp->next == NULL)
				return (NULL);
			temp = temp->next;
		}
		return (temp);
	}
	return (NULL);
}
