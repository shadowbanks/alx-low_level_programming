#include "main.h"
#include <limits.h>

/**
 * print_number - Print any integer number using putchar()
 * @n: number to be printed
 *
 * Return: 0 on success
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if ( n == INT_MIN)
		{
			_putchar('2');
			n = -147483648;
		}
		n = -n;
	}
	if (n /10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
