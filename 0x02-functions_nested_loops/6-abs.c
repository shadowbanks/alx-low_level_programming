#include "main.h"

/**
 * _abs -- Computes the absolute of an integer
 * @n: integer number
 *
 * Return: the absolute value
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
