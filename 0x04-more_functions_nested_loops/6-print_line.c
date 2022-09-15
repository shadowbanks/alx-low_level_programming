#include "main.h"

/**
 * print_line - prints (-) (n) number of times
 *
 * @n: how many types (-) prints
 *
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	if (n <= 0)
		_putchar('\n');
}
