#include "main.h"

int _sqrt(int n, int x);
/**
 * _sqrt_recursion - Find the square root of a number
 * @n: the number
 *
 * Return: the square root or -1 if the square root
 * is not a natural number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, n / 2));
}
/**
 * _sqrt - Find the square root of a number
 * @n: the number
 * @x: guess number
 *
 * Return: the square root or -1 if the square root
 * is not a natural number
 */
int _sqrt(int n, int x)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (n);
	if ((x * x) > n)
		return (_sqrt(n, x / 2));
	if ((x * x) == n)
		return (x);
	else if ((x + 1) * (x + 1) > n)
		return (-1);
	else
		return (_sqrt(n, ++x));
}
