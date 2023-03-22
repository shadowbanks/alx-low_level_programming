#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the number
 *
 * Return: The last digit of the number
 */

int print_last_digit(int n)
{
	long int m;

	m = n;
	if (m < 0)
		m *= -1;
	_putchar((m % 10) + '0');
	return (m % 10);
}
