#include "3-calc.h"

/**
 * main - Simple calculator
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: 0 (success)
 */

int main(int ac, char **av)
{
	int a, b;
	char *opr;
	int result;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	opr = av[2];

	if ((strcmp(opr, "/") == 0 && b == 0) || (strcmp(opr, "%") == 0 && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	if ((*get_op_func(opr)) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = (*get_op_func(opr))(a, b);

	printf("%d\n", result);

	return (0);
}
