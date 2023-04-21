#include "variadic_functions.h"

/**
 * sum_them_all - Sum all variadic arguments
 * @n: amount of digits
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	while (i++ < n)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
