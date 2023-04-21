#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_numbers - Print all numbers
 * @separator: string to be printed between numbers
 * @n: total number
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}

	putchar('\n');

	va_end(ap);
}
