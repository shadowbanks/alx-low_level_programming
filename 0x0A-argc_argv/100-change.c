#include <stdio.h>
#include <stdlib.h>

/**
  * cent - calculate the number of coins needed
  * @cent: amout of money
  *
  * Return: nothing
  */

void cents(int cent)
{
	int count = 0;

	while (cent > 0)
	{
		if (cent >= 25)
		{
			cent -= 25;
			count += 1;
		}
		else if (cent >= 10)
		{
			cent -= 10;
			count += 1;
		}
		else if (cent >= 5)
		{
			cent -= 5;
			count += 1;
		}
		else if (cent >= 2)
		{
			cent -= 2;
			count += 1;
		}
		else if (cent >= 1)
		{
			cent -= 1;
			count += 1;
		}
	}
	printf("%d\n", count);
}

/**
  * main - change any amont the minimum need cents
  * @argc: number of arguments (file name being the first)
  * @argv: argument passed (in this case amount of money)
  *
  * Return: 0
  */

int main(int argc, __attribute__((unused)) char **argv)
{
	int cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
	}
	else
		cents(cent);
	return (0);
}
