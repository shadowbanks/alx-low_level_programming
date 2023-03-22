#include <stdio.h>

/**
 * main - Print the all multiples of 3 & 5 till 1024
 *
 * Return: 0 on Success
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
