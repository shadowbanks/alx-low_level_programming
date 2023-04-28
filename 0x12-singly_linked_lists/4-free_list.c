#include "lists.h"

/**
 * free_list - free a linked list
 * @head: a linked list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	nextPtr temp = head;
	nextPtr temp2;

	while (temp != NULL)
	{
		temp2 = temp;
		free(temp2->str);
		free(temp2);
		temp = temp->next;
	}
}
