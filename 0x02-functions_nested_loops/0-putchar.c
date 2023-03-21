#include "main.h"

/**
 * main - Print a string with _putchar
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;
	int out[8] = {95, 112, 117, 116, 99, 104, 97, 114};

	for (i = 0; i < 8; i++)
		_putchar(out[i]);
	_putchar('\n');

	return (0);
}
