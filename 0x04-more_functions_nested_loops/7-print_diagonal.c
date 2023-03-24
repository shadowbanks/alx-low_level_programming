#include "main.h"

/**
 * print_diagonal - Print diagonal line
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i, j, k = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < k; j++)
			_putchar(' ');
		k++;
		_putchar('\\');
		_putchar('\n');
	}
}
