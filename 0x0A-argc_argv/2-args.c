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

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (EXIT_SUCCESS);
}
