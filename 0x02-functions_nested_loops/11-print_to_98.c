#include "main.h"

/**
 * print_to_98 - print to 98
 *@n: user number
 *
 */

void print_to_98(int n)
{
	int range, fNum, sNum, i, num;

	i = 0;
	if (n < 98)
		range = 98 - n;
	else
		range = n - 98;
	while (i <= range)
	{
		num = n;
		if (n < 0)
		{
			_putchar('-');
			num = (num * -1);
		}
		fNum = num / 10;
		sNum = num % 10;
		if (num < 10)
			_putchar(num + '0');
		else
		{
			if (fNum >= 10)
			{
				fNum = fNum / 10;
				sNum = sNum % 10;
				_putchar('1');
			}
			_putchar(fNum + '0');
			_putchar(sNum + '0');
		}
		if (n < 98)
			n++;
		else
			n--;
		if (num == 98)
			break;
		_putchar(',');
		_putchar(' ');
		i++;
	}
	_putchar('\n');
}
