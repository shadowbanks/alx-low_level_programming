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

	ptr = malloc(sizeof(char) * size + 1);

	if (ptr != NULL && size != 0)
	{
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}
		ptr[i] = '\0';

		return (ptr);
	}

	return (NULL);
}
