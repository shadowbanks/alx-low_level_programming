#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @number: number
 *
 * Return: the last digits
 */

int print_last_digit(int number)
{
	int digit;

	digit = (number % 10);
	if (digit < 0)
		digit = digit * -1;
	if (digit == 0)
		_putchar('0');
	else if (digit == 1)
		_putchar('1');
	else if (digit == 2)
		_putchar('2');
	else if (digit == 3)
		_putchar('3');
	else if (digit == 4)
		_putchar('4');
	else if (digit == 5)
		_putchar('5');
	else if (digit == 6)
		_putchar('6');
	else if (digit == 7)
		_putchar('7');
	else if (digit == 8)
		_putchar('8');
	else
		_putchar('9');
	return (digit);
}
