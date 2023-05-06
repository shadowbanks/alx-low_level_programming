#include "main.h"

void binary(unsigned int);
/**
 * print_binary - Print the binary convertion of a decimal
 * @n: decimal number
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar(n + '0');
		return;
	}
	binary(n);
}

/**
 * binary - print binary
 * @n: number
 */
void binary(unsigned int n)
{
	int bit;

	if (n == 0)
	{
		return;
	}
	bit = n & 01;
	binary(n >> 1);
	_putchar(bit + '0');
}
