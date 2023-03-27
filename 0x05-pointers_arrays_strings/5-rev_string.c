#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverse a string
 * @s: the string
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len = _strlen(s) - 1;
	char temp;
	int i = 0;

	while (i < len)
	{
		temp = *(s + len);
		*(s + len) = *(s + i);
		*(s + i) = temp;
		i++, len--;
	}
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
