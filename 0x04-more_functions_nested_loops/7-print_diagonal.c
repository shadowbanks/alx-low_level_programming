#include "main.h"

/**
 * print_diagonal - prints (\) (n) number of times
 *
 * @n: how many types \-) prints
 *
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
		_putchar('\n');
	while (i < n)
	{
		if (j == 0 && i == 0)
		{
			_putchar('\\');
		}
		j = 1;
		while (j <= i)
		{
			_putchar(' ');
			if (j == i)
				_putchar('\\');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
