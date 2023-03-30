#include "main.h"
#include <limits.h>

/**
 * print_number - Print any integer number
 * @n: number to be printed
 *
 * Return: Nothing
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n == INT_MIN)
		{
			_putchar('2');
			n = -147483648;
		}
		n *= -1;
	}

	if (n > 9)
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
	else
		_putchar(n + '0');
}
