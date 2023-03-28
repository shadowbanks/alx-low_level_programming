#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string to print
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}

/**
 * _strlen - Calculate length of string
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
		i++, s++;
	return (i);
}
