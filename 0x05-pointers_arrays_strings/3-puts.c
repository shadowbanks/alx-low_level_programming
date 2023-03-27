#include "main.h"

/**
 * _puts - Print a string followed by a new line
 * @str: string to be printed
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	char new = '\n';
	int len = _strlen(str);

	write(1, str, len);
	write(1, &new, 1);
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
