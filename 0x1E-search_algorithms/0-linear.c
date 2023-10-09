#include "search_algos.h"

/**
 * linear_search - Search an array using linear search
 * @array: point to the array
 * @size: size of the array
 * @value: search value
 *
 * Return: index of the found value or (-1 on no result found)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
