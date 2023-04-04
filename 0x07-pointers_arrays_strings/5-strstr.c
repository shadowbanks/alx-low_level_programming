#include "main.h"
#include <stddef.h>

/**
 * _strstr - searches for a substring in a string
 * @haystack: string to searched
 * @needle: substring to be found
 *
 * Return: Pointer to the beginning of the located
 * substring, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, len;
	char *hay;

	hay = haystack;
	len = _strlen(needle) - 1;

	if (len <= 0)
		return (haystack);

	while (needle[i] != '\0')
	{
		j = 0;
		while (hay[j] != '\0')
		{
			if (needle[i] == hay[j] && needle[i + len] == hay[j + len])
				return (&hay[j]);
			j++;
		}
		i++;
	}

	return (NULL);
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
