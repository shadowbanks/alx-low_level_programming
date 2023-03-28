#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an array of integers
 * @a: the array
 * @n: number of elements to be printed
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		i++;
		if (i == n)
		{
			printf("\n");
			break;
		}
		printf(", ");
	}
}
