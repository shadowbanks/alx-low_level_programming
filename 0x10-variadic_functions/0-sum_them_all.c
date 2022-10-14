#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - sums all interger
  * @n: total amount of numbers to be sumed
  * @...: list of numbers
  *
  * Return: sum of numbers
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}

	va_end(ap);
	return (sum);
}
