#include "main.h"

/**
 * print_most_numbers - Print numbers from 0-9 except 2&4
 *
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int i = 0;
	while(i < 10)
	{
		_putchar(i + '0');
		i++;
		if (i == 2 || i == 4)
			i++;
	}
	_putchar('\n');
}
