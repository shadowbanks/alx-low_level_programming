#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - print all strings separated by user define separator
  * @separator: separator to be used
  * @n: total number of strings
  * @...: strings
  *
  * Return: nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	while (i < n)
	{
		char *x = va_arg(ap, char *);
/*		printf("%s\n\n", x);*/
		if (*x == '\0')
			printf("nil");
		else
			printf("%s", x);
		if (separator == NULL)
			break;
		if (i != (n - 1))
			printf("%s", separator);
		i++;
	}
	va_end(ap);
	printf("\n");
}
