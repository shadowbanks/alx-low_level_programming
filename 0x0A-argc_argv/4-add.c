#include "main.h"

/**
 * main - Sum all positive numbers
 * @argc: Number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;
	char *temp;
	int num;

	while (i < argc)
	{
		num = strtol(argv[i], &temp, 10);
		if (argv[i] == temp || *temp != '\0')
		{
			printf("Error\n");
			return (1);
		}

		if (num < 0)
			num = 0;

		sum += num;
		i++;
	}

	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}
