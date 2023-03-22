#include <stdio.h>

/**
 * main - Print the first 50 fibonacci numbers
 *
 * Return: 0 qon Success
 */

int main(void)
{
	long int temp, old = 1, fib = 1, sum = 0;

	while (1)
	{
		temp = fib;
		fib += old;
		old = temp;
		if (fib >= 4000000)
			break;
		if (fib % 2 == 0)
			sum += fib;
	}
	printf("%ld\n", sum);

	return (0);
}
