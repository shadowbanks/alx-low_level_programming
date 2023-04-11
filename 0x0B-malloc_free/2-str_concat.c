#include "main.h"

int _strlen(char *s);

/**
 * str_concat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to the combined string or NULL if error
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *ptr;

	ptr = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)) + 1);

	if (ptr == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			ptr[i] =  s1[i];
			i++;
		}
	}

	if (s2 != NULL)
	{
		while (s2[j] != '\0')
		{
			ptr[i] =  s2[j];
			i++;
			j++;
		}
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
