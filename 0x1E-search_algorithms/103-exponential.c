#include "search_algos.h"


/**
 * print_arr - print every element of an array
 * @array: pointer to the array
 * @start: index the items should start printing from
 * @end: index the items should stop printing
 */
void print_arr(int *array, int start, int end)
{
	printf("%d", array[start++]);
	while (start < end)
	{
		printf(", ");
		printf("%d", array[start]);
		start++;
	}
	printf("\n");
}

/**
 * bin_search - Search for an item in an array using binary search
 * @array: pointer to the array
 * @start: lower bound of search
 * @end: upper bound of search
 * @value: the search item
 *
 * Return: found index or (-1)
 */
int bin_search(int *array, size_t start, size_t end, int value)
{
	size_t mid = 0;

	while (start <= end)
	{
		printf("Searching in array: ");
		print_arr(array, start, end + 1);
		mid = (end + start) / 2;
		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		if (array[mid] == value)
			return (mid);
	}
	return (-1);
}

/**
 * exponential_search - Search for an item in an array using exponential search
 * @array: pointer to the array
 * @size: size of the the array
 * @value: the search item
 *
 * Return: found index or (-1)
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t high = 0, range = 1;

	if (size == 0 || array == NULL)
		return (-1);
	while (range < size && array[range] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", range, array[range]);
		range *= 2;
	}

	if (range + 1 < size)
		high = range + 1;
	else
		high = size;

	printf("Value found between indexes [%ld] and [%ld]\n", range / 2, high - 1);
	return (bin_search(array, range / 2, high - 1, value));
}
