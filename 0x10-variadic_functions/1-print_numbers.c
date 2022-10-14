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

	va_start(ap, n);

	if (separator == NULL)
	{
		while (i < n)
		{
			printf("%d", va_arg(ap, int));
			i++;
		}
	}

	else
		while (i < n)
		{
			printf("%d", va_arg(ap, int));
			if (i != (n - 1))
				printf("%s", separator);
			i++;
		}
	va_end(ap);
	printf("\n");
}
