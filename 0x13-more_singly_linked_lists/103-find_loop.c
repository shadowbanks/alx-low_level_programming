#include "lists.h"

/**
 * find_listint_loop - Find the loop in a liked list
 * @head: pointer to a liked list
 *
 * Return: Adress to the start of the loop
 * or NULL if no loop exist
 */
listint_t *find_listint_loop(listint_t *head)
{
	nextPtr slow = NULL, fast = NULL;

	slow = fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;

			while (slow != NULL)
			{
				slow = slow->next;
				fast = fast->next;

				if (slow == fast)
					return (slow);
			}
		}
	}
	return (NULL);
}
