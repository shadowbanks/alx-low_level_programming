#include "main.h"

/**
 * _pow_recursion - Calculate "x" to the power of "y"
 * @x: base number
 * @y: power
 *
 * Return: "x" to the power "y"
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 0)
		return (0);
	if (x == 1 || y == 0)
		return (1);
	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
