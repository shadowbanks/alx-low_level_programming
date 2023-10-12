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
	size_t l = 0, h = size - 1;
	size_t pos = 0;

	if (array == NULL)
		return (-1);

	while ((array[l] != array[h]) && (value >= array[l]) && (value <= array[h]))
	{
		pos = (double)(h - l);
		pos = pos / (array[h] - array[l]);
		pos = l + (pos * (value - array[l]));
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
			l = pos + 1;
		else
			h = pos - 1;
	}
	return (-1);
}
