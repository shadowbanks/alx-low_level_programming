#include "main.h"

int _strlen(char *s);

/**
 * _strdup - Make a copy of a string
 * @str: string
 *
 * Return: Pointer to new string or NULL if error
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	ptr = malloc(sizeof(char) * _strlen(str) + 1);

	if (ptr == NULL || str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
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

	if (s == NULL)
		return (0);

	while (*s != '\0')
		i++, s++;
	return (i);
}
