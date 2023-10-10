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
 * binary_search - Search for an item in an array using binary search
 * @array: pointer to the array
 * @size: size of the the array
 * @value: the search item
 *
 * Return: found index or (-1)
 */
int binary_search(int *array, size_t size, int value)
{
	int start = 0, end = 0, mid = 0;

	end = size - 1;

	while (start <= end)
	{
		printf("Searching in array: ");
		print_arr(array, start, end + 1);
		mid = (end + start) / 2;
	/*	printf("mid = %d\n", mid);*/
		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		if (array[mid] == value)
			return (mid);
	}
	return (-1);
}
