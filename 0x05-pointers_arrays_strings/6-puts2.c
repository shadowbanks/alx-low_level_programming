#include "main.h"

/**
 * puts2 - Print every other character of a string
 * @str: string
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (i < _strlen(str))
	{
		_putchar(*(str + i));
		i += 2;
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
