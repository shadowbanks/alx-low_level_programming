#include <stdio.h>

/**
 * main - Fizz-Buzz
 *
 * Return: 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 15) == 0)
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i == 100)
			break;
		printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
