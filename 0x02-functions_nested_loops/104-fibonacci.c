#include <stdio.h>

/**
 * main - Print the first 98 fibonacci numbers
 *
 * Return: 0 qon Success
 */

int main(void)
{
	int i;
	long int temp, old = 1, fib = 1;

	for (i = 0; i < 97; i++)
	{
		printf("%ld, ", fib);
		temp = fib;
		fib += old;
		old = temp;
	}
	printf("%ld\n", fib);

	return (0);
}
