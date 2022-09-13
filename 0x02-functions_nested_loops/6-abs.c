#include "main.h"

/**
 *_abs - Computes the absolute value of an integer
 * @number: number
 *
 *Return: 0
 */

int _abs(int number)
{
	if (number >= 0)
		return (number);
	else
		return (number * -1);
}
