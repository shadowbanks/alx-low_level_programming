#include "function_pointers.h"

/**
 * array_iterator - Execute a function passed as a
 * parameter on each element of an array
 * @array: the array
 * @size: array size
 * @action: function passed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL || action == NULL)
	{
		while (i < size)
		{
		action(array[i++]);
		}
	}
}
