#include "main.h"

/**
  * _puts - prints string to stdout
  * @str: string to print
  *
  * Return: nothing
  */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i] + '0');
	}
	_putchar('\n');
}
