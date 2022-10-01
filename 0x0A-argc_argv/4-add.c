#include <stdio.h>
#include <stdlib.h>

/**
  * main - print file name
  * @argc: number of arguments supplied to the program
  * @argv: array of pointers
  *
  * Return: 0 (success)
  */

int main(int argc, __attribute__((unused)) char **argv)
{
	int i = 0, total = 0, checker;

	if (argc == 1)
		printf("0\n");

	else
	{
		while (argc--)
		{
			if (atoi(argv[i]) == 0)
			{
				checker = 0;
			}
			else if (atoi(argv[i]) >= 0)
				total += atoi(argv[i]);
			i++;
		}
		if (checker == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			printf("%d\n", total);
		}
	}
	return (0);
}
