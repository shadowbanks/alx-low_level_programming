#include "main.h"
#include "stdio.h"

/**
 * times_table - 9 times table
 * @
 *
 */

void times_table(void)
{
	int fNum, sNum, i, j, total;

	i = 0;
	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			total = i * j;
			fNum = total / 10;
			sNum = total % 10;

			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
			}

			else if (fNum == 0)
			{
				if (j != 9)
				{
					_putchar(' ');
					_putchar(sNum + '0');
					_putchar(',');
				}
				else
				{
					if (fNum == 0)
					{
						_putchar(' ');
						_putchar(sNum + '0');
						j++;
						continue;
					}
					else
					{
						_putchar(fNum + '0');
						_putchar(sNum + '0');
						_putchar(',');
					}
				}
			}
			else
			{
				if (j != 9)
				{
					_putchar(fNum + '0');
					_putchar(sNum + '0');
					_putchar(',');
				}
				else
				{
					_putchar(fNum + '0');
					_putchar(sNum + '0');
					j++;
					continue;
				}
			}
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
