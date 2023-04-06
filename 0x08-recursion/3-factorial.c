#include "main.h"

/**
 * factorial - Calculate factorial of a number
 * @n: the number
 *
 * Return: factorial of a number or -1 if n < 0
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
