#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of diagonals of a martix
 * @a: matrix
 * @size: matrix size
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, sumL = 0, sumR = 0, count = 0;

	while (count < size)
	{
		sumL = sumL + *(a + i + j);
		i += size;
		j++;
		count++;
	}

	i = 0;
	j = size - 1;
	count = 0;

	while (count < size)
	{
		sumR += *(a + i + j);
		i += size;
		j--;
		count++;
	}

	printf("%d, %d\n", sumL, sumR);
}
