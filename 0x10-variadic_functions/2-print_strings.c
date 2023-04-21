#include "variadic_functions.h"

/**
 * print_strings - Print strings
 * @separator: should be printed between strings
 * @n: number of strings
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *temp;

	if (n == 0)
		return;

	va_start(ap, n);

	while (i++ < n - 1)
	{
		temp = va_arg(ap, char*);
		printf("%s", temp == NULL ? "(nil)" : temp);
		printf("%s", separator == NULL ? "" : separator);
	}
	temp = va_arg(ap, char*);
	printf("%s\n", temp == NULL ? "(nil)" : temp);

	va_end(ap);
}
