#include "main.h"

/**
 * print_triangle - Print a triangle
 * @size: triangle size
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j, k, hash = 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < (size - i - 1); k++)
			_putchar(' ');
		for (j = 0; j < hash; j++)
			_putchar('#');
		hash++;
		_putchar('\n');
	}
}
