#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n number of items of an array
 * @a: pointer to an array
 * @n: number of items to be printed
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == (n - 1))
			break;
		printf(", ");
	}
	printf("\n");
}
