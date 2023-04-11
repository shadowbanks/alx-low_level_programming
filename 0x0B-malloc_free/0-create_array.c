#include "main.h"

/**
 * create_array - create an array of characters
 * @size: array size
 * @c: initialize the array with this character
 *
 * Return: Pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr != NULL)
	{
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}

		return (ptr);
	}

	return (NULL);
}
