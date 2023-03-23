#include "main.h"

/**
 * print_numbers - Print numbers from 0-9
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	int i = 0;
	while(i < 10)
		_putchar((i++) + '0');
	_putchar('\n');
}
