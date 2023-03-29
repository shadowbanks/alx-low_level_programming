#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverse an array
 * @a: the array
 * @n: array length
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;

	n--;

	while (i <= n)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
		i++, n--;
	}
}
