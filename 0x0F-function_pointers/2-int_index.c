#include "function_pointers.h"

/**
 * int_index - Search for an integer
 * @array: array to search
 * @size: array size
 * @cmp: function to use for the search
 *
 * Return: index integer is found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}

	return (-1);
}
