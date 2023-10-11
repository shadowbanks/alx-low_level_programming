#include "search_algos.h"
#include <math.h>

/**
 * lin_search - Linear Search a sub-array of elements
 * @array: pointer to array
 * @start: where the search should start
 * @end: where the search should end
 * @value: search value
 *
 * Return: index of the found item
 */
int lin_search(int *array, int start, int end, int value)
{
	while (start <= end)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[start] == value)
			break;
		start++;
	}
	return (start);
}
/**
 * jump_search - Search an array of element with jump search
 * @array: pointer to array
 * @size: array size
 * @value: search element
 *
 * Return: index of found element or (-1) if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	size_t i = 0;

	while (i < size)
	{
		if (array[i] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			i += jump;
		}
		else
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);
			return (lin_search(array, i - jump, i, value));
		}
	}
	if (array != NULL)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);
		lin_search(array, i - jump, size - 1, value);
	}
	return (-1);
}
