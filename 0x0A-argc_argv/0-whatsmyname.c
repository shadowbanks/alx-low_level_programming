#include <stdio.h>

/**
  * main - print file name
  * @argc: number of arguments supplied to the program
  * @argv: array of pointers
  *
  * Return: 0 (success)
  */

int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
