#include "main.h"

/**
 *
 *
 *
 *
 * Return:
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = size; j >= i; j--)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
		i++;
	}
}
