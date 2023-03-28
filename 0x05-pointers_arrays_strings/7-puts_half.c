#include "main.h"

/**
 * puts_half - Print the second half of a string
 * @str: the string
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int n = len;

	if (len % 2 != 0)
		n--;
	n /= 2;

	write(1, (str + n), n);
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
