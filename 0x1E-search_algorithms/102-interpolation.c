#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - Search an array of element with jump search
 * @array: pointer to array
 * @size: array size
 * @value: search element
 *
 * Return: index of found element or (-1) if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos = 0;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		pos = (double)(high - low);
		pos = pos / (array[high] - array[low]);
		pos = low + (pos * (value - array[low]));
		if (pos > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
