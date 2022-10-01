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
	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
