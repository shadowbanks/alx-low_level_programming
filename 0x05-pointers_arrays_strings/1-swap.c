#include "main.h"

/**
  * swap_int - Swap the values of two variables
  * @a: first value pointer
  * @b: second value pointer
  *
  * Return: nothing
  */

void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;

	*a = y;
	*b = x;
}
