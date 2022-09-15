#include "main.h"
#include "stdio.h"

/**
 * times_table - 9 times table
 * @
 *
 */

void times_table(void)
{
	int i, j, total;

	i = 0;
	while (i <= 9)
	{
		_putchar('0');
		j = 1;

		while (j <= 9)
		{
			total = i * j;
			_putchar(',');
			_putchar(' ');
			if (total <= 9)
			{
				_putchar(' ');
				_putchar(total + '0');
			}
			else
			{
				_putchar(total / 10 + '0');
				_putchar(total % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
