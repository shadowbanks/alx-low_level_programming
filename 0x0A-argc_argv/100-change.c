#include "main.h"

/**
 * main - Print the number of arguments passed
 * @argc: Number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
	int count = 0, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	while (num > 0)
	{
		if (num >= 25)
		{
			count++;
			num -= 25;
		}
		else if (num >= 10)
		{
			count++;
			num -= 10;
		}
		else if (num >= 5)
		{
			count++;
			num -= 5;
		}
		else if (num >= 2)
		{
			count++;
			num -= 2;
		}
		else if (num >= 1)
		{
			count++;
			num -= 1;
		}
	}

	printf("%d\n", count);
	return (EXIT_SUCCESS);
}
