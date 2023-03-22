#include <stdio.h>

/**
 * main - Print the first 50 fibonacci numbers
 *
 * Return: 0 qon Success
 */

int main(void)
{
	int temp, old = 2, fib = 1, sum = 0;

	while (1)
	{
		if (fib >= 4000000)
			break;
		/*printf("%d, ", fib);*/
		if (fib % 2 == 0)
			sum += fib;
		temp = fib;
		fib += old;
		old = temp;
	}
	printf("%d\n", sum);

	return (0);
}
