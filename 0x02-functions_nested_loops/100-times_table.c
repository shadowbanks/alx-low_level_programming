#include "main.h"

/**
 * print_times_table - Print the n times table
 * @n: determines the times table
 *
 * Return: Nothing
 */

void print_times_table(int n)
{
	int i, j, p;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			p = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			else if (p > 99)
			{
				_putchar(' ');
				_putchar('1');
				_putchar(((p / 10) % 10) + '0');
				_putchar((p % 10) + '0');
			}
			else if (p > 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			if (j != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
