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

	if (n == 0)
		return;

	va_start(ap, n);

	while (i++ < n - 1)
		printf("%d%s", va_arg(ap, int), separator == NULL ? "" : separator);

	printf("%d\n", va_arg(ap, int));

	va_end(ap);
}
