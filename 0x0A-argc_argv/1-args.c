#include "main.h"

/**
 * main - Print the number of arguments passed
 * @argc - Number of arguments passed
 * @argv - array of arguments passed
 *
 * Return - EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (EXIT_SUCCESS);
}
