#include "main.h"

/**
  * print_rev - prints string in reverse to stdout
  * @s: string to print
  *
  * Return: nothing
  */

void print_rev(char *s)
{
	int i, j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (j = count - 1; j != -1; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
