#include "main.h"

/**
 * main - Calculate the product of two arguments
 * @argc: Number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: EXIT_SUCCESS or 1 on failure
 */

int main(int argc, char **argv)
{

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

		return (EXIT_SUCCESS);
	}

	printf("Error\n");
	return (1);
}
