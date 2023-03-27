#include "main.h"

/**
 * swap_int - Swap two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
