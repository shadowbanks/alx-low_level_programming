#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - delet a node
  * @head: pointer to the address of a list
  * @index: index of node to be deleted
  *
  * Return: 1 if successful and -1 if failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *ptr2, *temp;
	unsigned int i = 0;

	/*check if list is empty*/
	if (*head == NULL)
		return (-1);
	ptr = ptr2 = *head;

	/*check if the node to be deleted is the first node*/
	if (index == 0)
		*head = ptr->next;

	/*move a pointer to the index of node to be deleted*/
	/*pointer ptr2 holds the address to the previous node*/
	while (i < index)
	{
		ptr2 = ptr;
		ptr = ptr->next;
		i++;
	}

	/*temp holds the address to the next node*/
	temp = ptr->next;
	free(ptr);
	ptr2->next = temp;
	ptr = NULL;

	return (1);
}
