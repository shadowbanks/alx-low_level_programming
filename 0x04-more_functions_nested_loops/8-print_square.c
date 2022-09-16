#include "main.h"

/**
 * print_square - print square
 * @size: size of square
 *
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			j = 1;
			_putchar('#');
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
