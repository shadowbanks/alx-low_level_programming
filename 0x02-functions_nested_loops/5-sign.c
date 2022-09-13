#include "main.h"

/**
 *print_sign - check the sign of a number
 *@n: holds the number that needs to be checked
 *Return: 1 if +ve, 0 if zero, and -1 if -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
