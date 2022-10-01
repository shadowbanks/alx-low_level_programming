#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
  * main - print file name
  * @argc: number of arguments supplied to the program
  * @argv: array of pointers
  *
  * Return: 0 (success)
  */

int main(int argc, __attribute__((unused)) char **argv)
{
	int i = 1, total = 0, count = 0;
	unsigned int j;
	char a;

	if (argc == 1)
		printf("0\n");
	else
	{
		while (i < argc)
		{
			for (j = 0; j < strlen(argv[i]); j++)
			{
				a = argv[i][j];
				if (a <= '9' && a >= '0')
				{
					count++;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			total += atoi(argv[i]);
			i++;
		}
		printf("%d\n", total);
	}
	return (0);
}
