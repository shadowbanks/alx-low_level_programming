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
 * search - binary search checking for the first occurence of search element
 * @array: pointer to array
 * @start: search lower bound
 * @end: search upper bound
 * @value: search element
 *
 * Return: found index or (-1) if not found
 */
int search(int *array, size_t start, size_t end, int value)
{
	int mid = 0;

	if (end >= start)
	{
		printf("Searching in array: ");
		print_arr(array, start, end + 1);
		mid = start + (end - start) / 2;

		if (array[start] == value)
			return (mid);

		if (array[mid] < value)
			return (search(array, mid + 1, end, value));
		else if (array[mid] >= value)
			return (search(array, start, mid - 1, value));
	}
	return (-1);
}

/**
 * advanced_binary - Search for an item in an array using binary search
 * @array: pointer to the array
 * @size: size of the the array
 * @value: the search item
 *
 * Return: found index or (-1)
 */
int advanced_binary(int *array, size_t size, int value)
{
	int start = 0, end = 0;

	end = size - 1;

	return (search(array, start, end, value));
}
