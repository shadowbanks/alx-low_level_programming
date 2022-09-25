#include "main.h"
#include <stdio.h>

/**
 * print_times_table - n times table
 * @n: n times table
 *
 */

void print_times_table(int n)
{
	int i, j, total, cal;

	if (n <= 15 && n >= 0)
	{
		i = 0;
		while (i <= n)
		{
			_putchar('0');
			j = 1;

			while (j <= n)
			{
				total = i * j;
				_putchar(',');
				_putchar(' ');
				if (total <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(total + '0');
				}
				else if (total < 100)
				{
					_putchar(' ');
					_putchar(total / 10 + '0');
					_putchar(total % 10 + '0');
				}
				else
				{
					cal = total / 10;
					_putchar(cal / 10 + '0');
					_putchar(cal % 10 + '0');
					_putchar(total % 10 + '0');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
