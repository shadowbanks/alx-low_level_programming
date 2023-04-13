#include "main.h"

/**
 * string_nconcat - Concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to be concatenated
 *
 * Return: pointer to memory with new string or NULL if fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0;
	unsigned int s1Len = _strlen(s1);
	unsigned int s2Len = _strlen(s2);

	ptr = malloc(s1Len + s2Len + 1);

	if (ptr == NULL)
		return (NULL);

	while (i < s1Len)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (j < n)
	{
		ptr[i++] = s2[j++];
		if (j == n || s2Len == j)
			break;
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
