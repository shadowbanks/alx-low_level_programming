#include <stdio.h>

/**
  * main - print file name
  * @argc: number of arguments supplied to the program
  * @argv: array of pointers
  *
  * Return: 0 (success)
  */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
