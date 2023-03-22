#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all natural numbers up to 98
 * @n: starting number
 *
 * Return: Nothing
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
			printf("%d, ", n--);
		else
			printf("%d, ", n++);
	}
	printf("%d\n", 98);
}
