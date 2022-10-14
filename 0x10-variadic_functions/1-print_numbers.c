#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - print all numbers separated by user define separator
  * @separator: separator to be used
  * @n: total numbers
  * @...: numbers
  *
  * Return: nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	if (*separator == '\0')
		return;

	if (separator == NULL)
		return;
	if (n == 0)
		return;

	va_start(ap, n);

	while (i < n)
	{
		printf("%d%s", va_arg(ap, int),  separator);
		i++;
	}
	va_end(ap);
	printf("\n");
}
